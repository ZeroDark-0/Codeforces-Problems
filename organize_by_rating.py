import os
import re
import json
import shutil
import urllib.request
from datetime import datetime

ROOT = r"E:\CodeForces"
SOURCE_FOLDERS = ["A", "B", "C", "D"]

DRY_RUN = False          # True = only print planned actions
COPY_INSTEAD_OF_MOVE = True   # True = copy files, False = move files
MAKE_BACKUP = True      # Backup original folders before real run

def fetch_codeforces_problems():
    url = "https://codeforces.com/api/problemset.problems"
    with urllib.request.urlopen(url) as response:
        data = json.loads(response.read().decode("utf-8"))
    if data["status"] != "OK":
        raise RuntimeError("Failed to fetch Codeforces problemset.")
    return data["result"]["problems"]

def build_problem_map(problems):
    problem_map = {}
    for p in problems:
        contest_id = p.get("contestId")
        index = p.get("index")
        rating = p.get("rating")
        if contest_id is not None and index is not None and rating is not None:
            key = f"{contest_id}{index}"
            problem_map[key] = rating
    return problem_map

def extract_problem_code(filename):
    match = re.match(r"^\s*(\d+[A-Z]\d*)\.\s", filename)
    if match:
        return match.group(1)
    return None

def make_backup():
    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    backup_root = os.path.join(ROOT, f"_backup_before_rating_sort_{timestamp}")
    os.makedirs(backup_root, exist_ok=True)

    for folder in SOURCE_FOLDERS:
        src = os.path.join(ROOT, folder)
        if os.path.isdir(src):
            dst = os.path.join(backup_root, folder)
            shutil.copytree(src, dst)

    return backup_root

def main():
    print("Fetching Codeforces problemset...")
    problems = fetch_codeforces_problems()
    problem_map = build_problem_map(problems)

    actions = []
    skipped = []

    for folder in SOURCE_FOLDERS:
        folder_path = os.path.join(ROOT, folder)

        if not os.path.isdir(folder_path):
            skipped.append((folder, "Folder not found"))
            continue

        for name in os.listdir(folder_path):
            source_path = os.path.join(folder_path, name)

            if not os.path.isfile(source_path):
                continue
            if not name.lower().endswith(".cpp"):
                continue

            code = extract_problem_code(name)
            if not code:
                skipped.append((name, "Could not parse problem code from filename"))
                continue

            rating = problem_map.get(code)
            if rating is None:
                skipped.append((name, f"No rating found for {code}"))
                continue

            target_dir = os.path.join(ROOT, str(rating))
            target_path = os.path.join(target_dir, name)

            if os.path.exists(target_path):
                skipped.append((name, f"Target already exists: {target_path}"))
                continue

            actions.append((source_path, target_dir, target_path, rating))

    print("\nPlanned actions:")
    if not actions:
        print("  No files to process.")
    else:
        for source_path, target_dir, target_path, rating in actions:
            action_word = "COPY" if COPY_INSTEAD_OF_MOVE else "MOVE"
            print(f"  {action_word}: {source_path} -> {target_path}")

    print("\nSkipped:")
    if not skipped:
        print("  Nothing skipped.")
    else:
        for name, reason in skipped:
            print(f"  {name} -> {reason}")

    if DRY_RUN:
        print("\nDry run only. No files were changed.")
        return

    backup_root = None
    if MAKE_BACKUP:
        print("\nCreating backup...")
        backup_root = make_backup()
        print(f"Backup created at: {backup_root}")

    print("\nApplying changes...")
    done = []

    for source_path, target_dir, target_path, rating in actions:
        os.makedirs(target_dir, exist_ok=True)

        if COPY_INSTEAD_OF_MOVE:
            shutil.copy2(source_path, target_path)
            done.append((source_path, target_path, "copied"))
        else:
            shutil.move(source_path, target_path)
            done.append((source_path, target_path, "moved"))

    print("\nCompleted actions:")
    for src, dst, mode in done:
        print(f"  {mode.upper()}: {src} -> {dst}")

    print(f"\nFinished successfully. Processed {len(done)} files.")
    if backup_root:
        print(f"Backup location: {backup_root}")

if __name__ == "__main__":
    main()
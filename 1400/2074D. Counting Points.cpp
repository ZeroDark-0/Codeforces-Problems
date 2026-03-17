#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<int> x(n), r(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> r[i];
        }
        map<int, vector<pair<int, int>>> intervals_map;
        for (int i = 0; i < n; i++) {
            int xi = x[i];
            int ri = r[i];
            for (int y = 0; y <= ri; y++) {
                long long y_sq = (long long)y * y;
                long long r_sq = (long long)ri * ri;

                if (y_sq > r_sq) {
                    continue;
                }

                long long dx_sq = r_sq - y_sq;
                int dx = (int)sqrt(dx_sq);

                while ((dx + 1) * (dx + 1) <= dx_sq) {
                    dx++;
                }
                while (dx * dx > dx_sq) {
                    dx--;
                }

                int start = xi - dx;
                int end = xi + dx;

                intervals_map[y].emplace_back(start, end);
            }
        }
        long long ans = 0;

        for (auto& entry : intervals_map) {
            int y_val = entry.first;
            auto& intervals = entry.second;

            sort(intervals.begin(), intervals.end());

            int merged_start = intervals[0].first;
            int merged_end = intervals[0].second;
            long long count = 0;

            for (size_t j = 1; j < intervals.size(); j++) {
                if (intervals[j].first <= merged_end + 1) {
                    merged_end = max(merged_end, intervals[j].second);
                }
                else {
                    count += (merged_end - merged_start + 1);
                    merged_start = intervals[j].first;
                    merged_end = intervals[j].second;
                }
            }
            count += (merged_end - merged_start + 1);

            if (y_val == 0) {
                ans += count;
            }
            else {
                ans += 2 * count;
            }
        }
        cout << ans << endl;
    }
}




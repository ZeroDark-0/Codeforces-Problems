#include <bits/stdc++.h>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    set<int> unique(nums.begin(), nums.end());
    if (unique.size() >= 2) {
        auto it = unique.begin();
        ++it;
        cout << *it << endl;
    } else {
        cout << "NO" << endl;
    }
}

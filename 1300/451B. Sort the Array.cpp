#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin>>v[i];

    if(is_sorted(v.begin(), v.end())) {
        cout << "yes\n1 1\n";
        return 0;
    }
    int l = 0;
    while(l + 1 < n && v[l] <= v[l + 1])
        l++;~

    int r = n - 1;
    while(r - 1 >= 0 && v[r - 1] <= v[r])
        r--;

    reverse(v.begin() + l, v.begin() + r + 1);

    if(is_sorted(v.begin(), v.end()))
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
    else
        cout << "no\n";
}

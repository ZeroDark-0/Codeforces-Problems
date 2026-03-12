#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >>n;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int big = INT_MIN, small = INT_MAX;
    int index1 = 0, index2 = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > big) {
            big = a[i];
            index1 = i;
        }
        if (a[i] < small) {
            small = a[i];
            index2 = i;
        }
    }
    swap(a[index1], a[index2]);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}
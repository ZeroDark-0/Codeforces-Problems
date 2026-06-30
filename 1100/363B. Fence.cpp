#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ,k;cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int sum = 0, index = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int best = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];

        if (sum < best) {
            best = sum;
            index = i - k + 1;
        }
    }

    cout << index + 1;
}
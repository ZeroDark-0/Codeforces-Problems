#include <bits/stdc++.h>

using namespace std;

pair<long long, long long> cal(long long x, long long n, long long m) {
    long long min =x, max= x;

    for (long long i =0; i < m;++i) {
        if (min % 2 ==0) {
            min/= 2;
        }
        else {
            min = (min + 1) / 2;
        }
    }
    for (long long i= 0; i <n; ++i) {
        min /= 2;
    }
    for (long long i =0; i <n; ++i) {
        if (max% 2 == 0) {
            max /= 2;
        }
        else {
            max= (max + 1) / 2;
        }
    }
    for (long long i = 0; i < m; ++i) {
        if (max % 2 == 0) {
            max /=2;
        }
        else {
            max= (max+ 1) / 2;
        }
    }

    return {min,max};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n, m;
        cin >> x >> n >> m;
        auto result = cal(x, n, m);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {

    while (true) {
        int N,M;
        cin >> N >> M;
        if (N <= 0 || M <= 0) {
            break;
        }
        int sum = 0;
        int start = min(N, M);
        int end = max(N, M);
            for (int i = start; i <= end; i++) {
                sum += i;
                cout << i << " ";
            }
        cout << "sum =" << sum << endl;
    }
}
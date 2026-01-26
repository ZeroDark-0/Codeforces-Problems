#include <bits/stdc++.h>

using namespace std;

void flush() {
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> edges[n + 1];
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        cout << "? 1 " << n;
        for (int i = 1; i <= n; ++i) {
            cout << " " << i;
        }
        cout << endl;
        flush();

        int total_sum;
        cin >> total_sum;
        vector<int> values(n + 1, 1);

        for (int i = 1; i <= n; ++i) {
            cout << "? 2 " << i << endl;
            flush();
            cout << "? 1 " << n;
            for (int j = 1; j <= n; ++j) {
                cout << " " << j;
            }
            cout << endl;
            flush();

            int new_sum;
            cin >> new_sum;

            if (new_sum == total_sum) {
                values[i] = -1;
            } else {
                values[i] = 1;
            }

            cout << "? 2 " << i << endl;
            flush();
        }
        cout << "! ";
        for (int i = 1; i <= n; ++i) {
            cout << values[i];
            if (i < n) cout << " ";
        }
        cout << endl;
        flush();
    }
    return 0;
}
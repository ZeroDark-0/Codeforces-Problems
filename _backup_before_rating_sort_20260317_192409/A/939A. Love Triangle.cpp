#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> f(n);
    for(int i = 0; i < n; i++) {
        cin >> f[i];
    }

    for(int i = 0; i < n; i++) {
        int a = i + 1;
        int b = f[i];
        int c = f[b - 1];

        if (f[c - 1] == a) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
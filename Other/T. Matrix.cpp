#include <bits\stdc++.h>
using namespace std;
int main() {
    int n;cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    int diag_1, diag_2;
    diag_1 = diag_2 = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i==j) {
                diag_1+=a[i][j];
            }
            if(i+j==n-1) {
                diag_2+=a[i][j];
            }
        }
    }
    cout << abs(diag_1-diag_2) << endl;
}
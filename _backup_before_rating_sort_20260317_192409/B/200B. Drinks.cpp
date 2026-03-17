#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int p[n];
    double ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        ans += p[i];
    }

    cout << fixed << setprecision(12) << ans / n << endl;

    return 0;
}
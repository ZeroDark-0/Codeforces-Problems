#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n%10 == 0) {
            cout << static_cast<long long>((n-1)-floor(n/2)) << endl;
        }

        else if(n == 1) {
            cout << 0 << endl;
        }

        else if(n%2 == 0) {
            cout << n/2-1 << endl;
        }

        else {
            long long ans = static_cast<long long>(floor(n/2));
            cout << ans << endl;
        }
    }
}
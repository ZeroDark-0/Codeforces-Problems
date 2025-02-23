#include <iostream>

using namespace std;

int main() {
    int a, b, c, t;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        (a + b == c || c + a == b || b + c == a) ? cout <<  "YES\n" : cout << "NO\n";
    }
}
#include <iostream>

using namespace std;

int gcd(int a, int b=100) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        cout << 100 / gcd(k) << endl;
    }
}
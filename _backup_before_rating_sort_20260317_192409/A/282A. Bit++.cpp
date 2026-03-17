#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        x += (s[0] == '+' || s[2] == '+') ? 1 : -1;
    }
    cout << x;
}
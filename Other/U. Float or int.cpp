#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    size_t dot = n.find('.');

    if (dot == string::npos) {
        cout << "int " << n;
        return 0;
    }

    string intPart = n.substr(0, dot);
    string fracPart = n.substr(dot + 1);

    bool allZero = true;
    for (char c : fracPart) {
        if (c != '0') {
            allZero = false;
            break;
        }
    }

    if (allZero) {
        if (intPart.empty() || intPart == "-") intPart += "0";
        cout << "int " << intPart;
    } else {
        if (intPart.empty() || intPart == "-") intPart += "0";
        cout << "float " << intPart << " 0." << fracPart;
    }

    return 0;
}

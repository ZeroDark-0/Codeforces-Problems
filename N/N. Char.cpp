#include<bits/stdc++.h>

using namespace std;

int main() {
    char a; cin >> a;
    int ascii = static_cast<int>(a);
    if (ascii >= 65 && ascii <= 90) {
        cout << static_cast<char>(ascii + 32);
    }
    else {
        cout << static_cast<char>(ascii - 32);
    }
}

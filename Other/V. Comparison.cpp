#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B;
    char S;
    cin >> A >> S >> B;

    bool ok = false;
    if (S == '<') ok = (A < B);
    else if (S == '>') ok = (A > B);
    else if (S == '=') ok = (A == B);

    cout << (ok ? "Right" : "Wrong") << '\n';
    return 0;
}
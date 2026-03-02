#include <bits/stdc++.h>

using namespace std;

int main() {
    int A,B,C; char S,Q; cin >> A >> S >> B >> Q >> C;
    if (S == '+' && A+B == C) cout << "Yes";
    if (S == '-' && A-B == C) cout << "Yes";
    if (S == '*' && A*B == C) cout << "Yes";
    if (S == '+' && A+B != C) cout << A+B;
    if (S == '-' && A-B != C) cout << A-B;
    if (S == '*' && A*B != C) cout << A*B;

}
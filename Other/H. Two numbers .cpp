#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) return 0;

    double x = (double)a / b;

    cout << "floor " << a << " / " << b << " = " << floor(x) << "\n";
    cout << "ceil "  << a << " / " << b << " = " << ceil(x)  << "\n";
    cout << "round " << a << " / " << b << " = " << round(x) << "\n";
}
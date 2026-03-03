#include<bits/stdc++.h>
using namespace std;

bool luckynumbercheck(int n) {
    while(n != 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;
        n /= 10;
    }
    return true;
}
int main() {
    int a, b;
    cin >> a >> b;

    bool found = false;
    for (int i = a; i <= b; i++) {
        if (luckynumbercheck(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << -1 << endl;
}
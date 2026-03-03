#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x,n;
    cin >> x >> n;
    long long sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            sum += pow(x,i) - 1;
        }else if(i%2 == 0) {
            sum += pow(x,i);
        }
    }
    cout << sum << endl;
}
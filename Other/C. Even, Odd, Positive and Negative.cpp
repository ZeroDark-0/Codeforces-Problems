#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin >>n;
    int even=0,odd=0,positive=0,negative =0;
    while (n-- >0) {
        int a; cin >>a;
        a%2 == 0 ? even++ : odd++;
        if (a > 0) positive++;
        if (a<0) negative++;
    }
    cout <<"Even: "<< even << "\n" <<"Odd: "<< odd << "\n" <<"Positive: "<< positive << "\n" <<"Negative: "<< negative <<endl;

}
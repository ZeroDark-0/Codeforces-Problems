#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;cin >> t;
    while(t-- > 0) {
        int x1 , x2 , x3;
        cin >> x1 >> x2 >> x3;
        int ans[3];
        ans[0] = abs(x1-x1) + abs(x2-x1) + abs(x3-x1);
        ans[1] = abs(x1-x2) + abs(x2-x2) + abs(x3-x2);
        ans[2] = abs(x1-x3) + abs(x2-x3) + abs(x3-x3);
        cout << *min_element(ans,ans+3) <<  endl;
    }
}
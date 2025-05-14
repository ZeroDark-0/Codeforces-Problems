// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t-- > 0){
//         int x;
//         cin >> x;
//         bool flag = false;
//         for(int y = x-1; y >= 1 ;y--){
//             int z = x^y;
//             if((x+y>z) && (x+z>y) && (y+z>x)){
//                 flag = true;
//                 cout << y << "\n";
//                 break;
//             }
//         }
//         if(flag!= true){
//             cout << -1 << "\n";
//         }
//     }
// }



#include <iostream>
using namespace std;

    bool isPowerOfTwo(int x) {
        return (x && !(x & (x - 1)));
    }

    bool isAllOnes(int x) {
        return (x & (x + 1)) == 0;
    }

    int highestSetBit(int x) {
        return 1 << (31 - __builtin_clz(x));
    }

        int main() {
            int t; cin >> t; while (t--) {
            int x; cin >> x;

            if (isPowerOfTwo(x) || isAllOnes(x)) {
                cout << -1 << "\n";
                continue;
            }

            int y = highestSetBit(x) - 1;
            cout << y << "\n";
        }
            return 0;
        }
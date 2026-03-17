#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0){
        int n , x;
        cin >> n >> x;
        int sum = 0;
        for(int i = 0;i<n;i++) {
            int in;
            cin >> in;
            sum = sum + in;
        }
        if(sum == n*x) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
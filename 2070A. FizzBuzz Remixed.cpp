#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count = 3* (n/15);
        for(int i = 0; i <= n%15; i++) {
            if(i%3 == i%5) {
                count++;
            }
        }
        cout << count << "\n";
    }
}
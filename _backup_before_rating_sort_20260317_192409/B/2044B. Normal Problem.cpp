#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s,ans;
        cin >> s;
        for(int i  = s.length()-1;i>=0;i--) {
            if(s[i] == 'p') {
                ans = ans + 'q';
            }
            else if(s[i] == 'q') {
                ans = ans + 'p';
            }
            else {
                ans = ans + s[i];
            }
        }
        cout << ans << endl;
    }
}
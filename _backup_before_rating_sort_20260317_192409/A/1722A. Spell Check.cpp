#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    string checker = "Timur";
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        std::sort(checker.begin(), checker.end());
        std::sort(s.begin(), s.end());
        if(checker == s) {
            cout << "YES" << endl;
        }
        else{
                cout << "NO" << endl;
        }
    }

}
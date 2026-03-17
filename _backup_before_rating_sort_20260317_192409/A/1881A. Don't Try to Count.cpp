#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, c = 0;
        cin >> n >>m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        for (int i = 0; i < 6; ++i) {
            if (x.find(s) != std::string::npos) {
                std::cout << i << std::endl;
                break;
            }
            x += x;
            if (i == 5) {
                std::cout << -1 << std::endl;
            }
        }
    }

}
#include <iostream>
#include <string>

using namespace std;

int main () {
    string s,check;
    cin >> s;
    if(!s.empty()) {
        for(char ele:s) {
            if(check.find(ele) != std::string::npos) {
                continue;
            }
            else {
                check = check + ele;
            }
        }
        if(check.size()%2 == 0) {
            cout << "CHAT WITH HER!";
        }
        else {
            cout <<  "IGNORE HIM!";
        }

    }
}
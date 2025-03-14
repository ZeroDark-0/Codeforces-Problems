#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    std::string target = "WUB";
    std::string replacement = " ";

    size_t pos = 0;
    while ((pos = s.find(target, pos)) != std::string::npos) {
        s.replace(pos, target.length(), replacement);
        pos += replacement.length();
    }
    while(s[0] == ' ') {
        s = s.substr(1);
    }
    cout << s;

}
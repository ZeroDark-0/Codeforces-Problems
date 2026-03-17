#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

string func(int n, char c) {
    string rr;
    if (n != 0) {
        for (int i = 0; i < n; ++i) {
            rr += c;
            if (i < n - 1) {
                rr += '+';
            }
        }
    }
    return rr;
}

int main() {
    string s;
    cin >> s;
    if(s.size() == 1) {
        cout << s;
    }
    else {
        int one = count(s.begin(),s.end(),'1');
        int two = count(s.begin(),s.end(),'2');
        int three = count(s.begin(),s.end(),'3');
        string result;
        if (one != 0) {
            result += func(one, '1');
        }
        if (two != 0) {
            if (!result.empty()) result += '+';
            result += func(two, '2');
        }
        if (three != 0) {
            if (!result.empty()) result += '+';
            result += func(three, '3');
        }
        cout << result;
    }
}
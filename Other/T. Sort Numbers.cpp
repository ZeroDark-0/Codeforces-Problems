#include  <bits/stdc++.h>
#include <vector>

using namespace std;

int main () {
    int A, B,C; cin >> A >> B >> C;
    vector<int> v = {A,B,C};
    sort(v.begin(),v.end());
    cout << v[0] << "\n" << v[1] << "\n" << v[2] << '\n' << endl;
    cout<< A << '\n' << B << '\n' << C << endl;
}


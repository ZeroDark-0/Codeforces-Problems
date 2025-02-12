#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = n;
        vector<long long> h;
        for(int i = 0;i<n;i++) {
            long input;
            cin >> input;
            h.push_back(input);
        }
        std :: sort(h.begin(),h.end());
        for(long long i = 1;i<n;i++) {
            if(h[i] == 1) {
                ans--;
            }
        }
        cout << ans << endl;
    }
}

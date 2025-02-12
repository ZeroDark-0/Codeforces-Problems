#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h;
        for(int i = 0;i<n;i++) {
            int input;
            cin >> input;
            h.push_back(input);
        }

        int count1 = 0;
        for (int i = 0;i< n;i++) {
            if(h[i]==1) {
                count1++;
            }
        }
        cout << n - count1/2 << endl;
    }
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int row_pos = 0, col_pos = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int num;
            cin >> num;
            if (num == 1) {
                row_pos = i + 1;
                col_pos = j + 1;
            }
        }
    }
    int moves = abs(row_pos - 3) + abs(col_pos - 3);
    cout << moves << endl;
    return 0;
}
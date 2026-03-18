#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    int x, y;
    cin >> x >> y;
    x--; y--;

    int dx[] = {-1, -1, -1,  0,  0,  1,  1,  1};
    int dy[] = {-1,  0,  1, -1,  1, -1,  0,  1};

    bool allX = true;

    for (int d = 0; d < 8; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            continue;

        if (grid[nx][ny] != 'x') {
            allX = false;
            break;
        }
    }

    cout << (allX ? "yes" : "no") << endl;
    return 0;
}

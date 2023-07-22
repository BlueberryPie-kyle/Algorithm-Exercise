#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

string grid[3];

void solve() {
    for (int i = 0; i < 3; i++) {
        cin >> grid[i];
    }
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[2][2] != '.') {
        cout << grid[0][0] << endl;
        return;
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[2][0] != '.') {
        cout << grid[0][2] << endl;
        return;
    }
    if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2] && grid[0][2] != '.') {
        cout << grid[0][0] << endl;
        return;
    }
    if (grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2] && grid[1][2] != '.') {
        cout << grid[1][0] << endl;
        return;
    }
    if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2] && grid[2][2] != '.') {
        cout << grid[2][0] << endl;
        return;
    }
    if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0] && grid[2][0] != '.') {
        cout << grid[0][0] << endl;
        return;
    }
    if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1] && grid[2][1] != '.') {
        cout << grid[0][1] << endl;
        return;
    }
    if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2] && grid[2][2] != '.') {
        cout << grid[0][2] << endl;
        return;
    }
    cout << "DRAW" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

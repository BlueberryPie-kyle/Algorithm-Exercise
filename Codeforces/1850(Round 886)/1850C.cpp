#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    string words[8];
    for (int i = 0; i < 8; i++) {
        cin >> words[i];
    }
    int r = -1, c = -1;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (words[i][j] == '.') continue;
            r = i, c = j;
            break;
        }
        if (r != -1) break;
    }
    if (r == -1) cout << "QNMDCSB" << endl;
    while (r < 8 && c < 8 && words[r][c] != '.') {
        cout << words[r][c];
        r++;
    }
    cout << endl;
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

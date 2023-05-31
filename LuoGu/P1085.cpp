#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int emo[8];

void solve() {
    for (int i = 1, x, y; i <= 7; i++) {
        cin >> x >> y;
        emo[i] = x + y - 8;
    }
    int mx = -0x3f3f3f3f, idx = -1;
    for (int i = 1; i <= 7; i++) {
        if (emo[i] > mx) {
            mx = emo[i];
            idx = i;
        }
    }
    if (mx <= 0) cout << 0;
    else {
        cout << idx;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

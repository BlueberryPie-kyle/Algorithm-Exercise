#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int ans = 0;

void solve() {
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        string str = to_string(i);
        for (auto j : str) {
            if (j == '2') ans++;
        }
    }
    cout << ans << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int ans = 0;
    string l, r;
    cin >> l >> r;
    while (l.size() != r.size()) {
        l.insert(l.begin(), '0');
    }
    for (int i = 0; i < r.size(); i++) {
        if (l[i] != r[i]) {
            ans = abs(r[i] - l[i]) + (r.size() - i - 1) * 9;
            break;
        }
    }
    cout << ans << endl;
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
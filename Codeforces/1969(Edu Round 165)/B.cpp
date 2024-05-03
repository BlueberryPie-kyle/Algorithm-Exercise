#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve() {
    string s;
    cin >> s;
    int cnt = 0, ans = 0;
    for (auto i : s) {
        if (i == '1') cnt++;
        if (i == '0' and cnt != 0) ans += cnt + 1;
    }
    cout << ans << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
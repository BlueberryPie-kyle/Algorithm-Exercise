#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    bool ok = true;
    ll cnt = 0, ans = 0;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x == 0) continue;
        if (x < 0 && ok) ok = false;
        if (x > 0 && !ok) {
            cnt++;
            ok = true;
        }
        ans += abs(x);
    }
    if (!ok) cnt++;
    cout << ans << " " << cnt << endl;
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

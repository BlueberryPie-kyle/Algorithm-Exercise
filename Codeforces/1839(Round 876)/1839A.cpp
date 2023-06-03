#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n, k, ans = 0;
    cin >> n >> k;
    int l = 1, r = n;
    while (l <= r) {
        if (l == r) ans += 1;
        else ans += 2;
        l += k;
        r -= k;
    }
    if (l - k < r) cout << ans + 1 << endl;
    else cout << ans << endl;
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

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x, ans = 0, mx = -1;
    cin >> x;
    for (int y = 1; y < x; y++) {
        int _mx = __gcd(x, y) + y;
        if (mx < _mx) {
            mx = _mx;
            ans = y;
        }
    }
    cout << ans << endl;
}

int main() {
    int t = 0;
    cin >> t;
    while (t--) solve();
    return 0;
}
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<ll, int> a, b, c, d;
    ll ans = 0;
    for (int i = 0, x, y; i < n; i++) {
        cin >> x >> y;
        ans += a[x]++;
        ans += b[y]++;
        ans += c[x - y]++;
        ans += d[x + y]++;
    }
    cout << ans * 2 << endl;
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

#include <bits/stdc++.h>
#define iMax INT_MAX
#define iMin INT_MIN
#define i64Max LONG_LONG_MAX
#define i64Min LONG_LONG_MIN
#define all(a) a.begin(), a.end()
#define FOR(a, n) for (int i = a, x; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    ll n, ans = 0;
    cin >> n;
    vector<int> boxes;
    FOR(0, n) {
        cin >> x;
        boxes.emplace_back(x);
    }
    FOR(1, n) {
        if ((n % i) != 0) continue;
        ll mn = i64Max, mx = i64Min, j = 0;
        while (j < n) {
            ll tmp = 0;
            for (int k = 0; k < i; k++) tmp += boxes[j + k];
            mn = min(mn, tmp);
            mx = max(mx, tmp);
            j += i;
        }
        ans = max(ans, mx - mn);
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
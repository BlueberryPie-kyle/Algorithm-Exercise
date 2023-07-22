#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    bool ok = false;
    ll n, c;
    cin >> n >> c;
    ll s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    function<bool(ll)> check = [&](ll tar) {
        ll square = 0;
        for (int i = 0; i < n; i++) {
            square += (s[i] + tar) * (s[i] + tar);
            if (square > c) {
                ok = true;  // r = mid
                return false;
            }
        }
        if (square == c) return true;
        else {
            ok = false;     // l = mid
            return false;
        }
    };
    sort(s, s + n, greater<ll>());
    ll l = 1, r = sqrt(c);
    while (l + 1 < r) {
        ll mid = ((r - l) >> 1) + l;
        if (check(mid)) {
            cout << mid / 2 << endl;
            return;
        } else {
            if (ok) {
                r = mid;
            } else {
                l = mid;
            }
        }
    }
    cout << 499999999 << endl;
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

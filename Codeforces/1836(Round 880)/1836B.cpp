#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    ll n, k, g, ans = 0;
    cin >> n >> k >> g;
    ll half = g % 2 ? g / 2 : g / 2 - 1;
    ans += (n - 1) * half;
    ll remain = k * g - ans;
    if (remain <= half) {
        ans += remain;
    } else {
        remain %= g;
        if (remain > half) ans -= g - remain;
        else ans += remain;
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

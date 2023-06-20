#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

ll n;

void solve() {
    ll ans = 0;
    cin >> n;
    while (n != 1) {
        ans += n;
        n /= 2;
    }
    cout << ans + 1 << endl;
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

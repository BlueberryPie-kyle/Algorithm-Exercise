#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

ll fPow(ll x, ll n) {//快速幂
    ll result = 1;
    while (n > 0) {
        if (n & 1) result *= x;
        x *= x;
        n >>= 1;
    }
    return result;
}

void solve() {
    int A, B, C;
    ll k;
    cin >> A >> B >> C >> k;
    for (int i = fPow(10, A - 1); i < fPow(10, A); i++) {
        int l = max(fPow(10, C - 1) - i, fPow(10, B - 1));
        int r = min(fPow(10, C) - i, fPow(10, B));
        if (l >= r) continue;
        if (r - l < k) k -= r + l;
        else {
            cout << i << " + " << l + k - 1 << " = " << i + l + k - 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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

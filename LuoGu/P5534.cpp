#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    long long a1, a2, n;
    cin >> a1 >> a2 >> n;
    long long d = a2 - a1;
    long long an = a1 + (n - 1) * d;
    long long ans = (a1 + an) * n / 2;
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

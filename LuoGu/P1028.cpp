#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int dp[1005], n;

void solve() {
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        if (i % 2 == 1) {
            dp[i] = dp[i - 1];
        } else {
            dp[i] = dp[i - 1] + dp[i / 2];
        }
    }
    cout << dp[n];
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

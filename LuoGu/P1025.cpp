#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int n, k, dp[205][205];

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        dp[i][1] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            if (i >= j) dp[i][j] = dp[i - 1][j - 1] + dp[i - j][j];
        }
    }
    cout << dp[n][k];
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

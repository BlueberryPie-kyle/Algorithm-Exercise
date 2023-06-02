#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 100005;
int n, k, dp[N];

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        dp[i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = i - 1; j > max(i - k - 1, 0); j--) {
            dp[i] += dp[j];
        }
        dp[i] %= 100003;
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

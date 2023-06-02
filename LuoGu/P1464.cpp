#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

long long dp[25][25][25];

int w(long long a, long long b, long long c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    else if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    else if (dp[a][b][c] != 0) return dp[a][b][c];
    else if (a < b && b < c) dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return dp[a][b][c];
}

void solve() {
    long long a, b, c;
    while (true) {
        memset(dp, 0, sizeof(dp));
        dp[20][20][20] = 1048576;
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) break;
        printf("w(%lld, %lld, %lld) = %d\n", a, b, c, w(a, b, c));
    }
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

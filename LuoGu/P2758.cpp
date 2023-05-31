#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

const int N = 2005;
int dp[N][N];
char a[N], b[N];

void solve() {
    cin >> a >> b;
    int la = strlen(a), lb = strlen(b);
    for (int i = 0; i <= la; i++) {
        for (int j = 0; j <= lb; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = i == 0 ? j : i;
            } else {
                if (a[i - 1] != b[j - 1]) {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
                } else {
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }
    }
    cout << dp[la][lb];
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
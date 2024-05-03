#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<vector<int>> dp(n + 1, vector<int>(k + 1, (int)1e18));
	dp[0][0] = 0;
	// dp[i][j]表示前i个数操作j次的最小和
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= k; j++) {
			int mn = 1e18;
			for (int d = 0; j + d <= k and i + d < n; d++) {
				mn = min(mn, a[i + d]);
				dp[i + d + 1][j + d] = min(dp[i + d + 1][j + d], dp[i][j] + (d + 1) * mn);
			}
		}
	}
	cout << *min_element(dp[n].begin(), dp[n].end()) << endl;
}

signed main() {
	int t = 0;
	cin >> t;
	while (t--) solve();
	return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, k, ans = 0x3f3f3f3f;
    cin >> n >> k;
    int a[n];
    memset(a, 0, sizeof a);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (k == 2 or k == 3 or k == 5) {
        for (auto i : a) {
            if (i % k == 0) ans = 0;
            ans = min(ans, k - i % k);
        }
        cout << ans << endl;
    } else {
        int cnt = 0;
        for (auto i : a) {
            if (i % 2 == 0) cnt++;
            if (i % k == 0 || i % k == k - 1) ans = min(min(i % k, k - i % k), ans);
        }
        cout << min(max(0, 2 - cnt), ans) << endl;
    }
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
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int ha[20005]{0}, a[105];

void solve() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ha[a[i]] = 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ha[a[i] + a[j]] == 1) {
                ans++;
                ha[a[i] + a[j]] = 2;
            }
        }
    }
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

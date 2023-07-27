#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int c[n];
    for (int i = 0; i < n; i++) cin >> c[i];
    if (c[0] == c[n - 1]) {
        int cnt = 0;
        for (int i = 0; i < n; i++) if (c[i] == c[0]) cnt++;
        if (cnt >= k) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        int cnt = 0, idx = -1;
        for (int i = 0; i < n; i++) {
            if (c[i] == c[0]) cnt++;
            if (cnt == k) {
                idx = i;
                cnt = 0;
                break;
            }
        }
        if (cnt != 0) cout << "NO" << endl;
        else {
            for (int i = idx; i < n; i++) {
                if (c[i] == c[n - 1]) cnt++;
                if (cnt == k) {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
        }
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

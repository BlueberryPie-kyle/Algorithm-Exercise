#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

const int N = 1e4 + 5;
int n, a[N], b[N], g[N], k[N], x, y;

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    cin >> x >> y;
    bool ok = false;
    for (int i = n - 1; i >= 0; i--) {
        if (x >= a[i] && x <= (a[i] + g[i]) && y >= b[i] && y <= (b[i] + k[i])) {
            cout << i + 1 << endl;
            ok = true;
            break;
        }
    }
    if (!ok) cout << -1 << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    int a[n];
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        a[i] = abs(x - H);
    }
    int mx = (m - 1) * k, cnt = 0;
    for (auto& x : a) {
        if (x <= mx && x % k == 0 && x != 0) cnt++;
    }
    cout << cnt << endl;
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

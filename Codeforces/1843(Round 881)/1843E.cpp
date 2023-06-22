#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 1e5 + 5;

int n, m, q, a[N], l[N], r[N], s[N];

bool check(int x) {
    memset(a, 0, sizeof a);
    for (int i = 1; i <= x; i++) a[s[i]]++;
    for (int i = 1; i <= n; i++) a[i] += a[i - 1];
    for (int i = 1; i <= m; i++) {
        if (a[r[i]] - a[l[i] - 1] > r[i] - l[i] + 1 - (a[r[i]] - a[l[i] - 1])) return true;
    }
    return false;
}

void solve() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) cin >> l[i] >> r[i];
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> s[i];
    int L = 1, R = q + 1;
    while (L < R) {
        int mid = ((R - L) >> 1) + L;
        if (check(mid)) R = mid;
        else L = mid + 1;
    }
    if (L > q) cout << -1 << endl;
    else cout << L << endl;
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
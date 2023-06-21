#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 1e5 + 5;

int q, n, m, t;
int l[N], r[N];
int a[N], s[N];

bool check(int x) {
    for (int i = 1; i <= n; i++) s[i] = 0;
    for (int i = 1; i <= x; i++) s[a[i]]++;
    for (int i = 1; i <= n; i++) s[i] += s[i - 1];
    for (int i = 1; i <= m; i++) {
        if (s[r[i]] - s[l[i] - 1] > r[i] - l[i] + 1 - (s[r[i]] - s[l[i] - 1])) return true;
    }
    return false;
}

void solve() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i];
    }
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> a[i];
    int l = 1, r = q + 1;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    if (l > q) l = -1;
    cout << l << endl;
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
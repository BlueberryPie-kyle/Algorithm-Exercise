#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        char ch;
        cin >> ch;
        int x = ch - '0';
        if (x == 1) a[i] = 1 + a[i - 1];
        else a[i] = a[i - 1];
    }
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        if (a[l] - a[l - 1] == 0 && a[r] - a[l] == 0) continue;
        int fi = l - 1, se = l;
        
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

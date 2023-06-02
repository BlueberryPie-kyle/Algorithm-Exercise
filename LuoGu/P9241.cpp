#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 15;
int t[N], d[N], l[N], vis[N], n;
bool flag = false;

void dfs(int num, int ll = -1) {
    if (num == n) {
        flag = true;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (vis[i] == 0) {
            if (t[i] + d[i] < ll) return;
            vis[i] = 1;
            dfs(num + 1, max(ll, t[i]) + l[i]);
            vis[i] = 0;
        }
    }
}

void solve() {
    memset(vis, 0, sizeof(vis));
    flag = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i] >> l[i];
    }
    dfs(0);
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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

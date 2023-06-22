#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 2e5 + 5;

int n, q, ch[N];
vector<int> g[N];

int dfs(int u, int p) {
    ch[u] = 0;
    bool ok = false;
    for (auto &i: g[u]) {
        if (i == p) continue;
        ch[u] += dfs(i, u);
        ok = true;
    }
    return ok ? ch[u] : ch[u] = 1;
}

void solve() {  //邻接表
    cin >> n;
    memset(ch, 0, sizeof ch);
    for (int i = 0; i < N; i++) {
        g[i].clear();
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << (ll) ch[x] * ch[y] << endl;
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
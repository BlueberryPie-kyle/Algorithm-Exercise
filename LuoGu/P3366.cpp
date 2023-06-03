#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 5e3 + 5, M = 2e5 + 5;

struct edge {
    int u, v, w;
} edges[M];

int n, m, ans = 0, fa[N];

int find(int x) {
    while (x != fa[x]) x = fa[x] = fa[fa[x]];
    return x;
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        fa[i] = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    sort(edges, edges + m, [](edge a, edge b) {
        return a.w < b.w;
    });
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        int u = find(edges[i].u), v = find(edges[i].v);
        if (u == v) continue;
        ans += edges[i].w;
        cnt++;
        fa[u] = v;
        if (cnt == n - 1) {
            cout << ans;
            return;
        }
    }
    cout << "orz";
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

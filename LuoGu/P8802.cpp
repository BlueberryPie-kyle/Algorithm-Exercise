#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 1005, M = 10005;
int C[N + 1], cost[N + 1][N + 1], dis[N + 1], vis[N + 1], n, m;

int dijkstra() {
    memset(dis, 0x3f, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    dis[1] = 0;
    int loop = n - 1;
    while (loop--) {
        int cur = -1;
        for (int i = 1; i <= n; i++) {
            if (!vis[i] && (cur == -1 || dis[cur] > dis[i])) {
                cur = i;
            }
        }
        if (cur == n) break;
        for (int i = 1; i <= n; i++) {
            dis[i] = min(dis[cur], dis[cur] + cost[cur][i]);
        }
        vis[cur] = 1;
    }
    return dis[n];
}

void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> C[i];
    }
    for (int i = 1, u, v, c; i <= m; i++) {
        cin >> u >> v >> c;
        cost[u][v] = c + C[v];
        cost[v][u] = c + C[u];
    }
    cout << dijkstra() << endl;
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

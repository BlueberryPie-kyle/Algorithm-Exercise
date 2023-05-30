#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 1005;
int n, m, cost[N][N], C[N], dis[N], vis[N];

int dijkstra() {
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0;
    int loop = n - 1;
    while (loop--) {
        int t = -1;
        for (int j = 1; j <= n; j++) {
            if (!vis[j] && (t == -1 || dis[t] > dis[j])) {
                t = j;
            }
        }
        if (t == n) break;
        for (int j = 1; j <= n; j++) {
            dis[j] = min(dis[j], dis[t] + cost[t][j]);
        }
        vis[t] = 1;
    }
    return dis[n];
}

void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> C[i];
    }
    memset(cost, 0x3f, sizeof(cost));
    for (int i = 1, u, v, c; i <= m; i++) {
        cin >> u >> v >> c;
        cost[u][v] = c + C[v];
        cost[v][u] = c + C[u];
    }
    cout << dijkstra() - C[n] << endl;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
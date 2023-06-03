#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 500005, M = 500005;
struct Chain_Foward_Star {
    int to;
    int next;
} edge[M << 1];
int head[N], fa[N], n, m, s, cnt = 1, ans[M], vis[N];
vector<int> q[N], qid[M];

int find(int x) {
    while (x != fa[x]) x = fa[x] = fa[fa[x]];
    return x;
}

void merge(int x, int y) {
    fa[y] = find(x);
}

void addEdge(int from, int to) {
    edge[cnt].to = to;
    edge[cnt].next = head[from];
    head[from] = cnt;
    cnt++;
}

void tarjan(int cur) {
    vis[cur] = 1;
    for (int i = head[cur]; i; i = edge[i].next) {
        int node = edge[i].to;
        if (vis[node]) continue;
        tarjan(node);
        merge(cur, node);
    }
    for (int i = 0; i < q[cur].size(); i++) {
        int x = cur, y = q[x][i], id = qid[x][i];
        if (vis[y] == 2) ans[id] = find(y);
    }
    vis[cur] = 2;
}

void solve() {
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) fa[i] = i;
    for (int i = 0, x, y; i < n - 1; i++) {
        cin >> x >> y;
        addEdge(x, y);
        addEdge(y, x);
    }
    for (int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        q[x].push_back(y);
        q[y].push_back(x);
        qid[x].push_back(i);
        qid[y].push_back(i);
    }
    tarjan(s);
    for (int i = 0; i < m; i++) {
        cout << ans[i] << endl;
    }
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

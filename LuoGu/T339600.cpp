//暴力，超时且爆内存
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
const int N = 1e5 + 5;
int n, m, a[N], b[N], dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}}, mxsize = 0, cnt = 0;
set<pair<int, int>> s;

void dfs(int x, int y, int size) {
    if (mxsize < size) {
        mxsize = size;
        cnt = 1;
    } else if (mxsize == size) {
        cnt += 1;
    }
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0], yy = y + dir[i][1];
        if (xx >= n || xx < 0 || yy >= m || yy < 0 || s.count({xx, yy})) continue;
        if (a[x] + b[y] != a[xx] + b[yy]) continue;
        s.insert({xx, yy});
        dfs(xx, yy, size + 1);
    }
}

void solve() {
    mxsize = 0;
    cnt = 0;
    s.clear();
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s.count({i, j})) continue;
            s.insert({i, j});
            dfs(i, j, 1);
        }
    }
    cout << mxsize << " " << cnt << endl;
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

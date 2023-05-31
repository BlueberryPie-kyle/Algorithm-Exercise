#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

const int N = 1e4 + 5;
int node[N]{0}, len, m;

void solve1() {//implementation
    int l, m, ans = 0;
    cin >> l >> m;
    for (int i = 0, left, right; i < m; i++) {
        cin >> left >> right;
        for (int j = left; j <= right; j++) {
            node[j] = 1;
        }
    }
    for (int i = 0; i <= l; i++) {
        if (node[i] == 0) ans++;
    }
    cout << ans;
}

int SegTree[N << 2]{0}, mark[N << 2]{0};

void pushup(int idx) {
    SegTree[idx] = SegTree[idx << 1] + SegTree[idx << 1 | 1];
}

void pushdown(int idx) {
    if (mark[idx]) {
        SegTree[idx << 1] = 0;
        SegTree[idx << 1 | 1] = 0;
        mark[idx << 1] = 1;
        mark[idx << 1 | 1] = 1;
        mark[idx] = 0;
    }
}

void build(int l, int r, int idx = 1) {
    if (l == r) {
        SegTree[idx] = 1;
        return;
    }
    int mid = ((r - l) >> 1) + l;
    build(l, mid, idx << 1);
    build(mid + 1, r, idx << 1 | 1);
    pushup(idx);
}

void update(int chl, int chr, int l = 0, int r = len, int idx = 1) {
    if (chl <= l && r <= chr) {
        SegTree[idx] = 0;
        mark[idx] = 1;
        return;
    }
    int mid = ((r - l) >> 1) + l;
    pushdown(idx);
    if (mid >= chl) update(chl, chr, l, mid, idx << 1);
    if (mid < chr) update(chl, chr, mid + 1, r, idx << 1 | 1);
    pushup(idx);
}

int query() {
    return SegTree[1];
}

void solve() {//Segment Tree
    cin >> len >> m;
    build(0, len);
    for (int i = 0, chl, chr; i < m; i++) {
        cin >> chl >> chr;
        update(chl, chr);
    }
    cout << query();
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

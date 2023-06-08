#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 1e6 + 5;
const int inf = 0x3f3f3f3f;
int a[N], n, segtree[N << 2], aMark[N << 2], cMark[N << 2];

void pushUp(int idx) {
    segtree[idx] = max(segtree[idx << 1], segtree[idx << 1 | 1]);
}

void pushDown(int idx) {
    if (cMark[idx] != inf) {
        segtree[idx << 1] = cMark[idx];
        segtree[idx << 1 | 1] = cMark[idx];
        cMark[idx << 1] = cMark[idx];
        cMark[idx << 1 | 1] = cMark[idx];
        cMark[idx] = inf;
        aMark[idx << 1] = 0;
        aMark[idx << 1 | 1] = 0;
    }
    segtree[idx << 1] += aMark[idx];
    segtree[idx << 1 | 1] += aMark[idx];
    aMark[idx << 1] += aMark[idx];
    aMark[idx << 1 | 1] += aMark[idx];
    aMark[idx] = 0;
}

void build(int l, int r, int idx = 1) {
    if (l == r) {
        segtree[idx] = a[l];
        return;
    }
    int mid = ((r - l) >> 1) + l;
    build(l, mid, idx << 1);
    build(mid + 1, r, idx << 1 | 1);
    pushUp(idx);
}

void uAdd(int L, int R, int val, int l, int r, int idx) {
    if (L <= l && r <= R) {
        segtree[idx] += val;
        aMark[idx] += val;
        return;
    }
    pushDown(idx);
    int mid = ((r - l) >> 1) + l;
    if (L <= mid) uAdd(L, R, val, l, mid, idx << 1);
    if (mid < R) uAdd(L, R, val, mid + 1, r, idx << 1 | 1);
    pushUp(idx);
}

void uChange(int L, int R, int val, int l, int r, int idx) {
    if (L <= l && r <= R) {
        segtree[idx] = val;
        cMark[idx] = val;
        aMark[idx] = 0;
        return;
    }
    pushDown(idx);
    int mid = ((r - l) >> 1) + l;
    if (L <= mid) uChange(L, R, val, l, mid, idx << 1);
    if (mid < R) uChange(L, R, val, mid + 1, r, idx << 1 | 1);
    pushUp(idx);
}

int query(int L, int R, int l, int r, int idx) {
    if (L <= l && r <= R) {
        return segtree[idx];
    }
    pushDown(idx);
    int mid = ((r - l) >> 1) + l, ans = -1;
    if (L <= mid) ans = max(query(L, R, l, mid, idx << 1), ans);
    if (mid < R) ans = max(query(L, R, mid + 1, r, idx << 1 | 1), ans);
    return ans;
}

void solve() {
    memset(cMark, -1, sizeof(cMark));
    int q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, n);
    while (q--) {
        int op, l, r, x;
        cin >> op;
        switch (op) {
            case 1: {
                cin >> l >> r >> x;
                uChange(l, r, x, 1, n, 1);
                break;
            }
            case 2: {
                cin >> l >> r >> x;
                uAdd(l, r, x, 1, n, 1);
                break;
            }
            case 3: {
                cin >> l >> r;
                cout << query(l, r, 1, n, 1) << endl;
                break;
            }
            default:
                exit(0);
                break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // freopen("..\\TestCases\\P1253_2.in", "r", stdin);
    // freopen("..\\TestCases\\test.out", "w", stdout);
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
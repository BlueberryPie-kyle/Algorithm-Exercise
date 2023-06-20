#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 1e5 + 5;

struct Seg {
    int l, r;
    int num;
    bool operator < (const Seg a) {
        return r != a.r ? r > a.r : l < a.l;
    }
};

void solve() {  //TLE
    int n, m, q, x;
    bool ok = false;
    cin >> n >> m;
    Seg a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].num = a[i].r - a[i].l + 1;
    }
    cin >> q;
    sort(a, a + m);
    for (int _ = 0; _ < q; _++) {
        cin >> x;
        if (ok) continue;
        for (int i = 0; i < m; i++) {
            if (x > a[i].r) break;
            if (x >= a[i].l) {
                a[i].num -= 2;
                if (a[i].num < 0) {
                    cout <<  _ + 1 << endl;
                    ok = true;
                    break;
                }
            }
        }
    }
    if (!ok) cout << -1 << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 1e5 + 5;
int a[N], b[N];

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int x = 0, y = 0;
    for (int i = 0; i < m; i++) {
        int op, p, q;
        cin >> op;
        if (op == 1) {
            cin >> p >> q;
            x += p;
            y += q;
        } else if (op == 2) {
            cin >> p;
            p--;
            a[p] += x;
            b[p] += y;
            swap(a[p], b[p]);
            a[p] -= x;
            b[p] -= y; 
        } else if (op == 3) {
            cin >> p;
            p--;
            cout << a[p] + x << " " << b[p] + y << endl;
        }
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

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int xa, xb, xc, ya, yb, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    if (xa < max(xc, xb) && xa > min(xc, xb) && ya < max(yc, yb) && ya > min(yc, yb)) {
        cout << 1 << endl;
        return;
    }
    if (xa <= max(xc, xb) && xa >= min(xc, xb)) {
        cout << min(abs(yb - ya), abs(yc - ya)) + 1 << endl;
        return;
    }
    if (ya <= max(yc, yb) && ya >= min(yc, yb)) {
        cout << min(abs(xb - xa), abs(xc - xa)) + 1 << endl;
        return;
    }
    cout << min((abs(xa - xb) + abs(ya - yb)), (abs(xa - xc) + abs(ya - yc))) + 1 << endl;
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

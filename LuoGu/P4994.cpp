#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int a = 0, b = 1, c, n = 1, m;
    cin >> m;
    while (true) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) {
            cout << n;
            break;
        }
        n++;
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

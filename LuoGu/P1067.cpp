#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int n, a;

void solve() {
    cin >> n;
    if (n) {
        for (int i = n; i >= 0; i--) {
            cin >> a;
            if (a) {
                if (i != n && a > 0) cout << "+";
                if (abs(a) > 1 || i == 0) cout << a;
                if (a == -1 && i) cout << "-";
                if (i > 1) cout << "x^" << i;
                if (i == 1) cout << "x";
            }
        }
    } else {
        cin >> a;
        cout << a;
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n]{0};
    if (n == 1) {
        cout << -1;
        return;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1] + 1) {
            cout << a[i];
            return;
        }
    }
    cout << -1;
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

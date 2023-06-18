#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n, h[105]{0};
    cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        h[x]++;
    }
    for (int i = 0; i < 104; i++) {
        if (h[i] < h[i + 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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

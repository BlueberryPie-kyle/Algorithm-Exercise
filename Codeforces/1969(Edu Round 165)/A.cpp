#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (a[a[i]] == i) {
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int a[105];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx = 1 + n;
    for (int i = 0; i < n; i++) {
        cout << mx - a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

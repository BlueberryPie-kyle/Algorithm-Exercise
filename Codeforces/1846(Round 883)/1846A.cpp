#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int n, a[205], b[205];

void solve() {
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > b[i]) cnt++;
    }
    cout << cnt << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3, greater<int>());
    if (a[0] + a[1] >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {  //Not elegant, and ugly
    int ans = 0, n = 0, pos = 0, neg = 0;
    cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x == 1) pos++;
        else neg++;
    }
    while (neg > pos) {
        neg--;
        pos++;
        ans++;
    }
    if (neg % 2 != 0) ans++;
    cout << ans << endl;
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

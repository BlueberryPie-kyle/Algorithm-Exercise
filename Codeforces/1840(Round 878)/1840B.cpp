#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    k = min(k, 30);
    cout << min(n, (1 << k) - 1) + 1 << endl;
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

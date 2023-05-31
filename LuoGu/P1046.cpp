#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int height[10], ca, ans = 0;

void solve() {
    for (int i = 0; i < 10; i++) {
        cin >> height[i];
    }
    cin >> ca;
    for (auto i : height) {
        if (30 + ca >= i) ans++;
    }
    cout << ans;
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << (a * 10 + b) / 19;
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

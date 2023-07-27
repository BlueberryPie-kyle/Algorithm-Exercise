#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int b, c, h;
    cin >> b >> c >> h;
    int a = b - 1;
    if (c + h > a) cout << a * 2 + 1 << endl;
    else cout << (c + h) * 2 + 1 << endl;
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

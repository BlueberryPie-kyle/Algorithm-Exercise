#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int x, k;
    cin >> x >> k;
    if (x % k != 0) {
        cout << 1 << endl << x << endl;
        return ;
    }
    for (int i = 1; i < x; i++) {
        if ((x - i) % k != 0 && i % k != 0) {
            cout << 2 << endl << x - i << " " << i << endl;
            break;
        }
    }
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

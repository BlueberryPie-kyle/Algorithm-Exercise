#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int budget[13]{0};

void solve() {
    for (int i = 1; i <= 12; i++) {
        cin >> budget[i];
    }
    int cur = 0, save = 0;
    for (int i = 1; i <= 12; i++) {
        cur += 300;
        cur -= budget[i];
        if (cur < 0) {
            cout << -i;
            return ;
        }
        if (cur >= 100) {
            save += ((cur / 100) * 100);
            cur %= 100;
        }
    }
    cout << save * 1.2 + cur;
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

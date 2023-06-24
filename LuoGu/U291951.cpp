#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, m, k;
    ll S;
    cin >> n >> m >> k >> S;
    ll avg = S / n;
    if (S % n == 0) {
        for (int i = 0; i < n; i++) {
            cout << avg << " ";
        }
    } else {
        for (int i = 0; i < n - S % n; i++) {
            cout << avg << " ";
        }
        for (int i = 0; i < S % n; i++) {
            cout << avg + 1 << " ";
        }
    }

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

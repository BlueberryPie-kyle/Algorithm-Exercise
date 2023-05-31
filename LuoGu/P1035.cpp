#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int ans[16]{0, 1, 4, 11, 31, 83, 227, 616, 1674, 4550, 12367, 33617, 91380, 248397, 675214, 1835421};

void preCal() {
    for (int k = 1; k <= 15; k++) {
        double sum = 0.0;
        for (double i = 1.0; i < 1e9; i += 1.0) {
            sum += pow(i, -1.0);
            if (sum >= k) {
                ans[k] = i;
                break;
            }
        }
    }
}

void solve() {
    int k;
    cin >> k;
    cout << ans[k];
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

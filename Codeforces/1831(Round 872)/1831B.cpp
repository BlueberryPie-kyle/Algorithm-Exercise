#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 2e5 + 5;
int a[N], b[N];

void solve() {
    int n;
    cin >> n;
    int cntA[2 * n + 5]{0}, cntB[2 * n + 5]{0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int lastA = -1, curCntA = 0, lastB = -1, curCntB = 0;
    for (int i = 0; i < n; i++) {
        if (lastA == a[i]) {
            curCntA++;
        } else {
            cntA[lastA] = max(cntA[lastA], curCntA);
            lastA = a[i];
            curCntA = 1;
        }
        if (lastB == b[i]) {
            curCntB++;
        } else {
            cntB[lastB] = max(cntB[lastB], curCntB);
            lastB = b[i];
            curCntB = 1;
        }
    }
    cntA[lastA] = max(cntA[lastA], curCntA);
    cntB[lastB] = max(cntB[lastB], curCntB);
    int ans = -1;
    for (int i = 1; i < 2 * n + 1; i++) {
        ans = max(ans, cntA[i] + cntB[i]);
    }
    cout << ans << endl;
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

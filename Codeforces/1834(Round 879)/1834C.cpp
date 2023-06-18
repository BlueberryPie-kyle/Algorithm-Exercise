#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int n;
string a, b;

void solve() {
    cin >> n >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) cnt1++;
        if (a[i] != b[n - i - 1]) cnt2++;
    }
    if (cnt1 % 2 == 0) {
        cnt1 *= 2;
    } else {
        cnt1 = cnt1 * 2 - 1;
    }
    if (cnt2 % 2 == 0) {
        if (cnt2 > 0) {
            cnt2 = cnt2 * 2 - 1;
        } else {
            cnt2 = 2;
        }
    } else {
        cnt2 *= 2;
    }
    cout << max(0, min(cnt1, cnt2)) << endl;
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

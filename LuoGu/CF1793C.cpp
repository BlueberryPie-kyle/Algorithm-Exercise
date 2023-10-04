#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1, curMX = n, curMN = 1;
    while (l <= r) {
        if (a[l] == curMX) {
            l++;
            curMX--;
            continue;
        }
        if (a[l] == curMN) {
            l++;
            curMN++;
            continue;
        }
        if (a[r] == curMX) {
            r--;
            curMX--;
            continue;
        }
        if (a[r] == curMN) {
            r--;
            curMN++;
            continue;
        }
        break;
    }
    if (l > r) cout << -1 << '\n';
    else
        cout << l + 1 << ' ' << r + 1 << '\n';
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

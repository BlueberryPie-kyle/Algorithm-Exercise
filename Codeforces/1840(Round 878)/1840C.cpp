#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 2e5 + 5;
int a[N];

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long len = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= q) len++;
        else {
            if (len >= k) {
                ans += ((len - k + 1 + 1) * (len - k + 1) / 2);
            }
            len = 0;
        }
    }
    if (len >= k) {
        ans += ((len - k + 1 + 1) * (len - k + 1) / 2);
    }
    cout << ans << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int maxlen = 0, start = 0;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] - a[i] > k) {
            maxlen = max(maxlen, i - start);
            start = i;
        }
    }
    maxlen = max(maxlen, n - start);
    cout << n - maxlen << endl;
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

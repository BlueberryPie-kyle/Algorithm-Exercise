#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define FOR(a, n) for (int i = a, x; i < n; i++)
#define endl "\n"
#define ll long long
const int iMax = INT_MAX;
const int iMin = INT_MIN;
const ll i64Max = LONG_LONG_MAX;
const ll i64Min = LONG_LONG_MIN;
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    FOR(0, n) cin >> a[i];
    int curSum = a[0], ans = a[0];
    FOR(1, n) {
        if (curSum < 0) curSum = 0;
        if (abs(a[i - 1] % 2) != abs(a[i] % 2)) curSum += a[i];
        else curSum = a[i];
        ans = max(ans, curSum);
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
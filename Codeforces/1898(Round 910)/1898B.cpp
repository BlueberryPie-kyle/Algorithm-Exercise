#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define ascend(a) sort(all(a), less<int>())
#define decline(a) sort(all(a), greater<int>())
#define io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FOR(a, n) for (int i = a, x; i < n; i++)
#define EACH(n) for (auto i : n)
#define endl "\n"
#define first x
#define second y

using namespace std;
using vi = vector<int>;
using vii = vector<int, vector<int>>;
using vl = vector<long long>;
using pii = pair<int, int>;

typedef long long ll;
const int iMax = INT_MAX;
const int iMin = INT_MIN;
const ll i64Max = LONG_LONG_MAX;
const ll i64Min = LONG_LONG_MIN;

void solve(int tc) {
    int n, c = 1;
    cin >> n;
    vi a;
    ll ans = 0;
    FOR(0, n) {
        cin >> x;
        a.emplace_back(x);
    }
    reverse(all(a));
    FOR(1, n) {
        x = a[i - 1] / c;
        c = (a[i] + x - 1) / x;
        c = max(c, 1);
        ans += c - 1;
    }
    cout << ans << endl;
}

int main() {
    io;
    int t = 1, tc = 0;
    cin >> t;
    while (tc != t) {
        solve(++tc);
    }
    return 0;
}

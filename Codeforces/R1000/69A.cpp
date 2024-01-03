#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define ascend(a) sort(all(a), less<int>())
#define decline(a) sort(all(a), greater<int>())
#define io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FOR(a, n) for (int i = a, x; i < n; i++)
#define EACH(n) for (auto& i : n)
#define endl "\n"
#define x first
#define y second

using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<long long>;
using pii = pair<int, int>;

typedef long long ll;
const int iMax = INT_MAX;
const int iMin = INT_MIN;
const ll i64Max = LONG_LONG_MAX;
const ll i64Min = LONG_LONG_MIN;

void solve() {
    int n, sa = 0, sb = 0, sc = 0;
    cin >> n;
    FOR(0, n) {
        int a, b, c;
        cin >> a >> b >> c;
        sa += a;
        sb += b;
        sc += c;
    }
    if (sa == 0 and sb == 0 and sc == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    io;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

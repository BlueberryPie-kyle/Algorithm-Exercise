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
    int n, k;
    ll mul = 1;
    cin >> n >> k;
    vi arr(n, 0);
    FOR (0, n) {
        cin >> arr[i];
        mul *= arr[i];
    }
    if (2023 % mul == 0) {
        cout << "YES" << endl << 2023 / mul << " ";
        FOR (0, k - 1) cout << 1 << " ";
        cout << endl;
    } else cout << "NO" << endl;
}

int main() {
    io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

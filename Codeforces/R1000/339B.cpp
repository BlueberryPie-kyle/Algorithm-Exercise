#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define ascend(a) sort(all(a), less<int>())
#define decline(a) sort(all(a), greater<int>())
#define io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
    int n, m;
    ll ans = 0;
    cin >> n >> m;
    vi task(m + 1, 1);
    for (int i = 1; i <= m; i++) cin >> task[i];
    for (int i = 1; i <= m; i++) {
        if (task[i] >= task[i - 1]) ans += 0LL + task[i] - task[i - 1];
        else ans += 0LL + n - task[i - 1] + task[i];
    }
    cout << ans << endl;
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

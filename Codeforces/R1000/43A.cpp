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
    int n, curmx = -1;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string goal;
        cin >> goal;
        mp[goal]++;
    }
    string winner;
    for (auto i : mp) {
        if (i.y > curmx) {
            winner = i.x;
            curmx = i.y;
        }
    }
    cout << winner << endl;
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

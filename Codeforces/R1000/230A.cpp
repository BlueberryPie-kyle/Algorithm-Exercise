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
    int s, n;
    cin >> s >> n;
    vector<pii> dragon(n);
    for (int i = 0; i < n; i++) {
        pii d;
        cin >> d.x >> d.y;
        dragon[i] = d;
    }
    sort(all(dragon), [&](const pii& a, const pii& b) {
        return a.x < b.x;
    });
    for (auto& i : dragon) {
        if (s > i.x) s += i.y;
        else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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

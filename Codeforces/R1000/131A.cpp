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

bool isUpper(char x) {
    return x <= 'Z';
}

void solve() {
    bool flag = true;
    string tar;
    cin >> tar;
    for (int i = 1; i < tar.size(); i++) if (!isUpper(tar[i])) flag = false;
    if (flag) for (auto& i : tar) i = isUpper(i) ? i += 32 : i -= 32;
    cout << tar << endl;
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
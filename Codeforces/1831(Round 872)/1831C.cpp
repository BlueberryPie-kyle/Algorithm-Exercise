#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 2e5 + 5;

void solve() {
    vector<pair<int, int>> a;
    int n, ans = 0;
    cin >> n;
    for (int i = 0, x, y; i < n - 1; i++) {
        cin >> x >> y;
        pair<int, int> tmp = {x, y};
        a.emplace_back(x, y);
    }
    bool hash[n + 1]{false};
    hash[1] = true;
    while (!a.empty()) {
        ans++;
        int sz = a.size();
        for (int i = 0; i < sz; i++) {
            if ((hash[a[i].first] || hash[a[i].second])) {
                hash[a[i].first] = true;
                hash[a[i].second] = true;
                a.erase(a.begin() + i);
                i -= 1;
                sz -= 1;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

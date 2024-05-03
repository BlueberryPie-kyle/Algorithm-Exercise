#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<int> p(n), a(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> a[i];
    function<int(int, int, vector<int>, vector<int>)> getScore = [=](int _k, int _pos, const vector<int>& _a, const vector<int>& _p) {
        vector<bool> vis(n, false);
        int sum = 0, mx = 0;
        while (!vis[_pos - 1] and _k--) {
            vis[_pos - 1] = true;
            sum += _a[_pos - 1];
            mx = max(mx, sum + _k * _a[_pos - 1]);
            _pos = _p[_pos - 1];
        }
        return mx;
    };
    int bs = getScore(k, pb, a, p), ss = getScore(k, ps, a, p);
    if (bs > ss) cout << "Bodya" << endl;
    else if (bs < ss) cout << "Sasha" << endl;
    else cout << "Draw" << endl;
}

signed main() {
    int t = 0;
    cin >> t;
    while (t--) solve();
    return 0;
}

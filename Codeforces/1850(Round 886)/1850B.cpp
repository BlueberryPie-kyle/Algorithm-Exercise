#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    vector<tuple<int, int, int>> v;
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b, i + 1});
    }
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return get<1>(a) > get<1>(b);
    });
    for (auto &i : v) {
        if (get<0>(i) > 10) continue;
        cout << get<2>(i) << endl;
        return;
    }
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

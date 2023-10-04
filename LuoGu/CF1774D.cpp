#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, m, sum = 0, k = 0;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<int> cnt(n, 0), check(n, 0);
    vector<tuple<int, int, int>> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j]) cnt[i]++;
        }
        sum += cnt[i];
    }
    if (sum % n != 0) {
        cout << -1 << endl;
        return;
    }
    int OinA = sum / n;
    function<void(int)> ch = [&](int idx) {
        if (cnt[idx] == OinA) check[idx] = 0;
        if (cnt[idx] > OinA) check[idx] = 1;
        if (cnt[idx] < OinA) check[idx] = -1;
    };
    for (int i = 0; i < n; i++) {
        ch(i);
    }
    for (int j = 0; j < m; j++) {
        vector<int> lo, mo;
        for (int i = 0; i < n; i++) {
            if (check[i] == 1 && a[i][j] == 1) mo.emplace_back(i);
            else if (check[i] == -1 && a[i][j] == 0)
                lo.emplace_back(i);
        }
        k += min(lo.size(), mo.size());
        for (int i = 0; i < min(lo.size(), mo.size()); i++) {
            ans.emplace_back(lo[i], mo[i], j);
            cnt[lo[i]]++;
            cnt[mo[i]]--;
            ch(lo[i]);
            ch(mo[i]);
        }
    }
    for (auto i: check) {
        if (i != 0) {
            cout << -1 << endl;
            return;
        }
    }
    cout << k << endl;
    for (auto i: ans) {
        cout << get<0>(i) + 1 << " " << get<1>(i) + 1 << " " << get<2>(i) + 1 << endl;
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

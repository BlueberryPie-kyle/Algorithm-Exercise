#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int n, m, h;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first > b.first;
    } else {
        return a.second < b.second;
    }
}

void solve() {
    cin >> n >> m >> h;
    vector<int> s[n];
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        for (int j = 0, x; j < m; j++) {
            cin >> x;
            s[i].push_back(x);
        }
        sort(s[i].begin(), s[i].end());
        for (int j = 1; j < m; j++) {
            s[i][j] += s[i][j - 1];
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i][m - 1] <= h) {
            int pen = 0;
            for (int j = 0; j < m; j++) {
                pen += s[i][j];
            }
            a.push_back({m, pen});
            continue;
        }
        for (int j = 0; j < m; j++) {
            if (s[i][j] <= h) continue;
            int pen = 0;
            for (int k = 0; k < j; k++) {
                pen += s[i][k];
            }
            a.push_back({j, pen});
            break;
        }
    }
    pair<int, int> tar = a[0];
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (a[i].first != tar.first || a[i].second != tar.second) continue;
        cout << i + 1 << endl;
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

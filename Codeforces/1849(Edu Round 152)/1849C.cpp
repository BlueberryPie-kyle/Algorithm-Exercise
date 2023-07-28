#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    set<pair<int, int>> S;
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int nxt[n + 1], lst[n + 1];
    memset(nxt, n, sizeof(nxt));
    memset(lst, -1, sizeof(lst));
    for (int i = n - 1; i >= 0; i--) {
        nxt[i] = s[i] == '1' ? i : nxt[i + 1];
    }
    for (int i = 0; i < n; i++) {
        lst[i + 1] = s[i] == '0' ? i : lst[i];
    }
    while (m--) {
        int l, r;
        cin >> l >> r;
        l--;
        l = nxt[l];
        r = lst[r];
        if (l > r) {
            l = r = -1;
        }
        S.emplace(l, r);
    }
    cout << S.size() << endl;
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
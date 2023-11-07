#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    string s;
    int n, k, t[26], cnt = 0;
    memset(t, 0, sizeof t);
    cin >> n >> k >> s;
    for (auto i : s) t[i - 'a']++;
    for (auto i : t) if (i % 2) cnt++;
    if ((n - k) % 2) {
        if (k >= cnt - 1 && k % 2 != cnt % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        if (k >= cnt && k % 2 == cnt % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
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
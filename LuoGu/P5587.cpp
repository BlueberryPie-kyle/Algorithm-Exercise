#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

string s[10005], t[10005];
int n, m, ans;

void solve() {
    string s1;
    while (getline(cin, s1), s1 != "EOF") {
        n++;
        for (char i: s1)
            if (i == '<') {
                if (!s[n].empty()) s[n].pop_back();
            } else s[n] += i;
    }
    while (getline(cin, s1), s1 != "EOF") {
        if (++m > n) break;
        for (char i: s1)
            if (i == '<') {
                if (!t[m].empty()) {
                    t[m].pop_back();
                }
            } else t[m] += i;
        for (int i = 0; i < min(t[m].size(), s[m].size()); i++) ans += s[m][i] == t[m][i];//逐位比较
    }
    cin >> m;
    cout << (long long) (ans * 60.0 / m + 0.5);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

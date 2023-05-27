#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int n;
string str;

void solve() {
    cin >> n;
    cin >> str;
    int mx = 1, cur = 1;
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) cur++;
        else {
            mx = max(cur, mx);
            cur = 1;
        }
    }
    mx = max(cur, mx);
    cout << mx + 1 << endl;
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

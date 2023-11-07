#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    multiset<int> l, r;
    int cnt, left, right;
    cin >> cnt;
    while (cnt--) {
        char op;
        cin >> op;
        cin >> left >> right;
        if (op == '+') {
            l.insert(left);
            r.insert(right);
        } else {
            l.erase(l.find(left));
            r.erase(r.find(right));
        }
        cout << (l.size() == 0 ? "NO" : *r.begin() < *l.rbegin() ? "YES" : "NO") << endl;
    }
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
#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

bool ok = false;
vector<int> a;
int n, x, k;

void solve() {
    a.clear();
    ok = false;
    cin >> n >> k >> x;
    function<void(int)> dfs = [&](int idx) {
        if (n == 0) return;
        for (int i = idx; i <= k; i++) {
            if (i == x) continue;
            if (n - i < k && n - i != x && n - i >= 0) {
                if (i != 0) a.push_back(i);
                if (n - i != 0) a.push_back(n - i);
                ok = true;
                cout << "YES" << endl;
                cout << a.size() << endl;
                for (auto it: a) {
                    cout << it << " ";
                }
                return;
            }
            if (i == 0) continue;
            dfs(i + 1);
            if (ok) return;
            if (n - i >= 0) {
                a.push_back(i);
                n -= i;
                dfs(1);
            }
            if (ok) return;
        }
    };
    dfs(0);
    if (!ok) cout << "NO";
    cout << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int h[1005];

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (!h[x]) {
            h[x] = 1;
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    cout << a.size() << endl;
    for (auto& i : a) {
        cout << i << " ";
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

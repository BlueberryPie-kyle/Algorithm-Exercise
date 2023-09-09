#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> a;
    a.emplace_back(b[0]);
    for (int i = 1; i < n; i++) {
        if (a.back() > b[i]) a.emplace_back(b[i]);
        a.emplace_back(b[i]);
    }
    cout << a.size() << endl;
    for (auto i : a) cout << i << " ";
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

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;    
    vector<pair<int, int>> a(n);
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        a[i] = {x, i};
    }
    stable_sort(a.begin(), a.end(),
        [&](pair<int, int> i, pair<int, int> j) {
            return (i.first - 1) % k > (j.first - 1) % k;
    });
    for (int i = 0; i < n; i++) cout << a[i].second + 1 << " \n"[i == n - 1];
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

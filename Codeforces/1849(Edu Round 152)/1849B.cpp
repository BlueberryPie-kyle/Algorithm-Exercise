#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    pair<int, int> a[n];
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        x %= k;
        a[i] = {x, i};
    }
    sort(a, a + n, [&](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.first == b.first) return a.second < b.second;
        else return a.first < b.first;
    });
    for (int i = 0; i < n; i++) {
        cout << a[i].second + 1 << " ";
    }
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 2e5 + 5;

void solve() {
    int n;
    long long ans = 0;
    cin >> n;
    priority_queue<int> pq[n + 1];
    for (int i = 0, x, y; i < n; i++) {
        cin >> x >> y;
        pq[x].push(y);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i && !pq[i].empty(); j++) {
            ans += pq[i].top();
            pq[i].pop();
        }
    }
    cout << ans << endl;
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
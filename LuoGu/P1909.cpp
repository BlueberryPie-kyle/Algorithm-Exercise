#include <bits/stdc++.h>
#define endl "\n"
#define cost second
#define num first

using namespace std;

void solve() {
    double n;
    cin >> n;
    pair<double, double> a, b, c;
    cin >> a.num >> a.cost;
    cin >> b.num >> b.cost;
    cin >> c.num >> c.cost;
    int ca = ceil(n / a.num) * a.cost;
    int cb = ceil(n / b.num) * b.cost;
    int cc = ceil(n / c.num) * c.cost;
    cout << min(ca, min(cb, cc));
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

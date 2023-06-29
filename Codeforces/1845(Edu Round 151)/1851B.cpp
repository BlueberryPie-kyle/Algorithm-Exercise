#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    ll ax = 0, bx = 0, cx = 0, ay = 0, by = 0, cy = 0;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    int ans = 1;
    if ((ax < bx and ax < cx) or (ax > bx and ax > cx)) {
        ans += min(abs(ax - bx), abs(ax - cx));
    }
    if ((ay < by and ay < cy) or (ay > by and ay > cy)) {
        ans += min(abs(ay - by), abs(ay - cy));
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

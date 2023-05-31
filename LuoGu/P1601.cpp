#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> a, b, ans;
string x, y;

void solve() {
    cin >> x >> y;
    for (int i = 0; i < x.size(); i++) {
        a.emplace_back(x[i] - '0');
    }
    for (int i = 0; i < y.size(); i++) {
        b.emplace_back(y[i] - '0');
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int la = a.size(), lb = b.size(), car = 0;
    for (int i = 0; i < min(la, lb); i++) {
        ans.emplace_back((a[i] + b[i] + car) % 10);
        car = (a[i] + b[i] + car) / 10;
    }
    if (la < lb) {
        for (int i = la; i < lb; i++) {
            ans.emplace_back((b[i] + car) % 10);
            car = (b[i] + car) / 10;
        }
    } else if (la > lb) {
        for (int i = lb; i < la; i++) {
            ans.emplace_back((a[i] + car) % 10);
            car = (a[i] + car) / 10;
        }
    }
    if (car > 0) ans.push_back(car);
    reverse(ans.begin(), ans.end());
    for (auto i : ans) {
        cout << i;
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

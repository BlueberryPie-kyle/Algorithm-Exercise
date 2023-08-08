#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, c = 1;
    cin >> n;
    vector<int> b(n * (n - 1) / 2);
    for (int i = 0; i < n * (n - 1) / 2; i++) cin >> b[i];
    sort(b.begin(), b.end());
    for (int i = 0; i < n - 1; i++) {
        cout << b[(n - 1 + n - i) * i / 2] << " ";
    }
    cout << b.back() << endl;
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
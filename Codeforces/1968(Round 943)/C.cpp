#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> x(n + 1, 0), a(n, 0);
    for (int i = 1; i < n; i++) cin >> x[i];
    a[0] = x[1] + 1;
    for (int i = 1; i < n; i++) {
        int k = 0;
        while (k * a[i - 1] + x[i] <= x[i + 1]) k++;
        a[i] = k * a[i - 1] + x[i];
    }
    for (auto i : a) cout << i << " ";
    cout << endl;
}

int main() {
    int t = 0;
    cin >> t;
    while (t--) solve();
    return 0;
}

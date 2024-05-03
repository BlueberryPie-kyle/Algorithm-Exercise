#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    vector<int> x(n, 0);
    for (int i = 1; i < n; i++) cin >> x[i];
    vector<int> a(x.size() + 1, 0);
    a[1] = 1;
    for (int i = x.size(); i > 1; --i) {
        int candidate = x[i - 2];
        while (candidate % a[i - 1] != x[i - 2]) candidate += a[i - 1];
        a[i] = candidate;
    }
    for (int i = 1; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int t = 0;
    cin >> t;
    while (t--) solve();
    return 0;
}
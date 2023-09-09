#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        a[i] -= x;
    }
    int x = *max_element(a.begin(), a.end()); 
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) ans.emplace_back(i + 1); 
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " \n" [i == ans.size() - 1];
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
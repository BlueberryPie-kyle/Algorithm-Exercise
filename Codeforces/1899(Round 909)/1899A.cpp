#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    if ((n + 1) % 3 == 0 or (n - 1) % 3 == 0) cout << "First" << endl;
    else cout << "Second" << endl;
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

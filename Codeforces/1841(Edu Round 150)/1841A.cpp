#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n > 4) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 25;
string a[N];
int n;

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, [](const string x, const string y) {
        return x + y > y + x;
    });
    for (int i = 0; i < n; i++) {
        cout << a[i];
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

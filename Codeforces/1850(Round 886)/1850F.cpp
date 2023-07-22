#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 2e5 + 5;
int a[N], b[N];

void solve() {
    int n;
    cin >> n;
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x <= n) a[x]++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            b[j] += a[i];
        }
    }
    cout << *max_element(b, b + n + 1) << "\n";
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

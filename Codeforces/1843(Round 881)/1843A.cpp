#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 55;
int a[N];

void solve() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        sum += a[j] - a[i];
    }
    cout << sum << endl;
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

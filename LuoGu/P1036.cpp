#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 25;
int n, k, a[N], ans = 0;

bool isPrime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void dfs(int start, int cnt, int sum) {
    if (cnt == k && isPrime(sum)) {
        ans++;
        return;
    }
    for (int i = start; i <= n; i++) {
        dfs(i + 1, cnt + 1, sum + a[i]);
    }
}

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, [](const int x, const int y) {
        return x < y;
    });
    dfs(1, 0, 0);
    cout << ans;
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

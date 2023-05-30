#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 100005;
int a[N]{0};

void solve() {  //差分
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            ans += a[i] - a[i - 1];
        }
    }
    cout << ans;
}

void solve2() { //比较明显的差分
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) b[i] = a[i];
        else b[i] = a[i] - a[i - 1];
    }
    int ans = b[0];
    for (int i = 1; i < n; i++) {
        if (b[i] > 0) {
            ans += b[i];
        }
    }
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

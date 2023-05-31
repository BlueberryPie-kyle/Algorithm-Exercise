#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 1e3 + 5;
int a[N][N];

void solve() {  //implementation
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0, x; j < m; j++) {
            cin >> x;
            a[j][x] = 1;
        }
    }
    for (int i = 1; i <= k; i++) {
        int ans = 0;
        for (int j = 0; j < m; j++) {
            if (a[j][i]) ans++;
        }
        cout << ans << " ";
    }
}

bitset<N> bs[N];

void solve1() { //bitset
    int n, m, k;
    cin >> n >> m >> k;
    while (n--) {
        for (int i = 0, x; i < m; i++) {
            cin >> x;
            bs[x][i] = 1;   //表示第x天时需要用第i套题
        }
    }
    for (int i = 1; i <= k; i++) {
        cout << bs[i].count() << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve1();
    }
    return 0;
}

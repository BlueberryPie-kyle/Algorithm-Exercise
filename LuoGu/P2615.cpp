#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 40;
int a[N][N];

void solve() {
    int n;
    cin >> n;
    int cr = 0, cc = n / 2;
    a[cr][cc] = 1;
    for (int i = 2; i <= n*n; i++) {
        if (cr == 0 && cc != n - 1) {
            cr = n - 1;
            cc += 1;
            a[cr][cc] = i;
            continue;
        }
        if (cr != 0 && cc == n - 1) {
            cr -= 1;
            cc = 0;
            a[cr][cc] = i;
            continue;
        }
        if (cr == 0 && cc == n - 1) {
            cr += 1;
            a[cr][cc] = i;
            continue;
        }
        if (cr != 0 && cc != n - 1) {
            if (cr - 1 >= 0 && cc + 1 < n && a[cr - 1][cc + 1] == 0) {
                cr -= 1;
                cc += 1;
                a[cr][cc] = i;
            } else {
                cr += 1;
                a[cr][cc] = i;
            }
            continue;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
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

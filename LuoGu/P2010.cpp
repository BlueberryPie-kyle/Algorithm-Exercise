#include <bits/stdc++.h>

using namespace std;

int a, b, ans, m[13]{-1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void solve() {
    cin >> a >> b;
    int start = a / 10000, end = b / 10000;
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= m[i]; j++) {
            int c = i / 10 + i % 10 * 10 + j / 10 * 100 + j % 10 * 1000;
            int date = c * 10000 + i * 100 + j;
            if (date <= b && date >= a) ans++;
            else cout << date << endl;
        }
    }
    cout << ans;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
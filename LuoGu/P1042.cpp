#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int a[25 * 2500 + 5], win, lose;

void solve() {
    char ch;
    for (int i = 0; cin >> ch && ch != 'E'; i++) {
        if (ch == 'W') a[i] = 1;
        else a[i] = 2;
    }
    for (int i = 0;; i++) {
        if (a[i] == 1) win++;
        if (a[i] == 2) lose++;
        if (a[i] == 0) {
            cout << win << ":" << lose << endl << endl;
            break;
        }
        if (abs(win - lose) >= 2 && (win >= 11 || lose >= 11)) {
            cout << win << ":" << lose << endl;
            win = 0;
            lose = 0;
        }
    }
    win = 0;
    lose = 0;
    for (int i = 0;; i++) {
        if (a[i] == 1) win++;
        if (a[i] == 2) lose++;
        if (a[i] == 0) {
            cout << win << ":" << lose << endl << endl;
            break;
        }
        if (abs(win - lose) >= 2 && (win >= 21 || lose >= 21)) {
            cout << win << ":" << lose << endl;
            win = 0;
            lose = 0;
        }
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

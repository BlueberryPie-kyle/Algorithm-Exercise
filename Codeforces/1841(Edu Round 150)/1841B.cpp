#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int q, last = -1, first = -1;
    bool ok = true;
    cin >> q;
    for (int i = 0, x; i < q; i++) {
        cin >> x;
        if (i == 0) {
            cout << 1;
            last = x;
            first = x;
            continue;
        }
        if (ok && x >= last) {
            cout << 1;
            last = x;
        } else {
            if (ok && x <= first) {
                cout << 1;
                last = x;
                ok = false;
                continue;
            }
            if (x <= first && x >= last) {
                cout << 1;
                last = x;
            } else {
                cout << 0;
            }
        }
    }
    cout << endl;
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


//There is a WA:
/*
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n, last = -1, first = -1;
    bool ok = true;
    cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (last == -1) {
            cout << 1;
            last = x;
            first = x;
            continue;
        }
        if (ok) {
            if (x >= last) {
                cout << 1;
                last = x;
            } else {
                if (x <= first) {
                    cout << 1;
                    last = x;
                    ok = false;
                }
            }
        } else {
            if (x >= last && x <= first) {
                cout << 1;
                last = x;
            } else {
                cout << 0;
            }
        }
    }
    cout << endl;
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
*/
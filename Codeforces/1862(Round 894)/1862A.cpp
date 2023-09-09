#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

char name[4] = {'v', 'i', 'k', 'a'};

void solve() {
    int cur = 0;
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[i][j] != name[cur]) continue;
            else {
                cur++;
                if (cur == 4) {
                    cout << "YES" << endl;
                    return;
                }
                break;
            }
        }
    }
    if (cur != 4) cout << "NO" << endl;
    else
        cout << "YES" << endl;
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

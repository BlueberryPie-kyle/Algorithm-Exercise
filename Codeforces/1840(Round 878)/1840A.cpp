#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n;
    string str;
    cin >> n >> str;
    char cur = str[0];
    for (int i = 1; i < str.length(); i++) {
        if (cur == str[i]) {
            cout << cur;
            if (i != str.length() - 1) {
                cur = str[i + 1];
                i += 1;
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

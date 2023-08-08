#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int carry = 0;
    int k = n;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] + carry >= '5') {
            k = i;
            carry = 1;
        } else {
            s[i] += carry;
            carry = 0;
        }
    }
    for (int i = k; i < n; i++) s[i] = '0';
    if (carry) s = '1' + s;
    cout << s << endl;
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

inline int read() {
    char ch = '*';
    while (!isdigit(ch = getchar()));
    int num = ch - '0';
    while (isdigit(ch = getchar())) num = num * 10 + ch - '0';
    return num;
}

void solve() {
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

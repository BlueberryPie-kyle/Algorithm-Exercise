#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

long long arr[105];

void solve() {
    long long num = 0x3f3f3f3f;
    int len = 0;
    while (num != 0) {
        cin >> num;
        arr[len] = num;
        len++;
    }
    for (int i = len - 2; i >= 0; i--) {
        cout << arr[i] << " ";
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

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 2e5 + 5;
int n = 0, prefixSum[N];

void solve() {
    cin >> n;
    int ans[n], hash[3]{0, 0, 0};
    char ch;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        if (i == 0) prefixSum[0] = ch == '(' ? 1 : -1;
        else {
            if (ch == '(') {
                prefixSum[i] = prefixSum[i - 1] + 1;
            } else {
                prefixSum[i] = prefixSum[i - 1] - 1;
            }
        }
        if (prefixSum[i] > 0) ans[i] = 1;
        if (prefixSum[i] < 0) ans[i] = 2;
        if (prefixSum[i] == 0) ans[i] = ans[i - 1];
        hash[ans[i]]++;
    }
    if (prefixSum[n - 1] != 0) {
        cout << -1 << endl;
        return;
    }
    if (hash[1] && hash[2]) {
        cout << 2 << endl;
        for (auto& i : ans) {
            cout << i << " ";
        }
    } else {
        cout << 1 << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

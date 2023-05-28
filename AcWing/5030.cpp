#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

const int N = 5005;
int a[N], ans[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int curMax = a[i], hash[n + 1]{0};
        for (int j = i; j < n; j++) {
            hash[a[j]]++;
            if (hash[a[j]] > hash[curMax]) {
                curMax = a[j];
            } else if (hash[a[j]] == hash[curMax] && curMax > a[j]) {
                curMax = a[j];
            }
            ans[curMax]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 2e5 + 5;
const long long M = 4e10 + 5;
int a[N]{0}, b[N]{0};

bool check(int x) {
    
}

void solve() {
    int n, ans;
    long long m;
    cin >> n >> m;
    int l = 0x3f3f3f3f, r = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        l = min(l, a[i]);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        r = max(r, a[i] + b[i]);
    }
    l--;r++;
    while (l + 1 != r) {
        int mid = ((r - l) >> 1) + l;
        if (check(mid)) {
            ans = mid;
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << ans;
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

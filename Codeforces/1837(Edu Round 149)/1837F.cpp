#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 3e5 + 5;
int n, k, a[N];
long long l, r, m;

bool check(long long x) {
    vector<int> pre(n + 1), su(n + 1);
    for(int _ = 0; _ < 2; _++) {
        priority_queue<int> cur;
        pre[0] = 0;
        long long cursum = 0;
        for(int i = 0; i < n; i++) {
            cur.push(a[i]);
            cursum += a[i];
            while (cursum > x) {
                cursum -= cur.top();
                cur.pop();
            }
            pre[i + 1] = cur.size();
        }
        reverse(a, a + n);
        swap(pre, su);
    }
    reverse(su.begin(), su.end());
    for (int i = 0; i <= n; i++) if (pre[i] + su[i] >= k) return true;
    return false;
}

void solve() {
    long long ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    l = 0, r = accumulate(a, a + n, 1ll);
    while (l + 1 != r) {
        m = ((r - l) >> 1) + l;
        if (check(m)) {
            ans = m;
            r = m;
        } else {
            l = m;
        }
    }
    cout << ans << endl;
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

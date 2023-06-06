#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 1e5 + 5;
int a[N], ht[N];
vector<int> tag;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (ht[a[i]] == 0 && a[i] <= n) ht[a[i]]++;
        else tag.push_back(i);
    }
    for (int i = 1; i < N && !tag.empty(); i++) {
        if (ht[i] == 0) {
            a[tag[0]] = i;
            tag.erase(tag.begin());
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
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

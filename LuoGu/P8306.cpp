#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define ascend(a) sort(all(a), less<int>())
#define decline(a) sort(all(a), greater<int>())
#define io                       \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"

using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<long long>;
using pii = pair<int, int>;

typedef long long ll;
const int iMax = INT_MAX;
const int iMin = INT_MIN;
const ll i64Max = LONG_LONG_MAX;
const ll i64Min = LONG_LONG_MIN;

int Trie[3000005][65], cnt[3000005], idx = 0;
int getIndex(char x) {
    if (x >= 'A' && x <= 'Z')
        return x - 'A';
    else if (x >= 'a' && x <= 'z')
        return x - 'a' + 26;
    else
        return x - '0' + 52;
}

void insert(const string& str) {
    int p = 0;
    for (auto i : str) {
        int c = getIndex(i);
        if (!Trie[p][c]) Trie[p][c] = ++idx;
        p = Trie[p][c];
        cnt[p]++;
    }
}

int query(const string& str) {
    int p = 0;
    for (auto i : str) {
        int c = getIndex(i);
        if (!Trie[p][c]) return 0;
        p = Trie[p][c];
    }
    return cnt[p];
}

void solve() {
    int n, q;
    string s;
    memset(Trie, 0, sizeof Trie);
    memset(cnt, 0, sizeof cnt);
    idx = 0;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        insert(s);
    }
    for (int i = 1; i <= q; i++) {
        cin >> s;
        cout << query(s) << endl;
    }
}

int main() {
    io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
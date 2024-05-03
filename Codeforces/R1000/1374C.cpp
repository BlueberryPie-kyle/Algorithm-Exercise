#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define ascend(a) sort(all(a), less<int>())
#define decline(a) sort(all(a), greater<int>())
#define io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define x first
#define y second

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

void solve() {
    int n, ans = 0;
    string bracket, trush = "";
    cin >> n >> bracket;
    stack<char> st;
    for (auto i : bracket) {
        if (st.empty()) {
            if (i == ')') ans++;
            else st.push(i);
        } else {
            if (i == ')') st.pop();
            else st.push(i);
        }
    }
    cout << ans << endl;
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
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

struct Competitor {
    int id;
    int score;
} a[5005];

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].score;
    }
    sort(a, a + n, [](Competitor a, Competitor b) {
        return a.score != b.score ? a.score > b.score : a.id < b.id;
    });
    int idx = floor(m * 1.5);
    int line = a[idx - 1].score;
    int num = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].score >= line) num++;
        else break;
    }
    cout << line << " " << num << endl;
    for (int i = 0; i < num; i++) {
        cout << a[i].id << " " << a[i].score << endl;
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

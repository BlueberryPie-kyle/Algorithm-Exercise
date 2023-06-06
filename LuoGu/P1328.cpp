#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int N = 205;
int score[5][5] = {{0, 0, 1, 1, 0},
                   {1, 0, 0, 1, 0},
                   {0, 1, 0, 0, 1},
                   {0, 0, 1, 0, 1},
                   {1, 1, 0, 0, 0}};
int a[N], b[N], aans = 0, bans = 0;

void solve() {
    int na, nb, n;
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        aans += score[a[i % na]][b[i % nb]];
        bans += score[b[i % nb]][a[i % na]];
    }
    cout << aans << " " << bans;
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

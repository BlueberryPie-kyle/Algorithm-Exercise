#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 2e5 + 5;

struct ChainFowardStar {
    int to;
    int from;
    int next;
} edge[N * N];

int head[N], cnt;

void addEdge(int from, int to) {
    edge[cnt].to = to;
    edge[cnt].from = from;
    edge[cnt].next = head[from];
    head[from] = cnt++;
}

void solve() {
    memset(head, -1, sizeof head);
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
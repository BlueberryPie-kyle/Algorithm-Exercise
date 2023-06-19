#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const int N = 105;
struct StuInf {
    int idx;
    string name;
    int avg;
    int com;
    bool gdx;
    bool pri;
    int paper;
    int prize = 0;
    bool operator < (const StuInf a) {
        return prize != a.prize ? prize > a.prize : idx < a.idx;
    }
} stu[N];

void check(StuInf& a) {
    if (a.avg > 80 && a.paper >= 1) a.prize += 8000;
    if (a.avg > 85 && a.com > 80) a.prize += 4000;
    if (a.avg > 90) a.prize += 2000;
    if (a.avg > 85 && a.pri) a.prize += 1000;
    if (a.com > 80 && a.gdx) a.prize += 850;
}
void solve() {
    int n, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        stu[i].idx = i;
        cin >> stu[i].name >> stu[i].avg >> stu[i].com;
        char ch;
        cin >> ch;
        if (ch == 'Y') stu[i].gdx = true;
        else stu[i].gdx = false;
        cin >> ch;
        if (ch == 'Y') stu[i].pri = true;
        else stu[i].pri = false;
        cin >> stu[i].paper;
        check(stu[i]);
        res += stu[i].prize;
    }
    sort(stu, stu + n);
    cout << stu[0].name << endl << stu[0].prize << endl << res;
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

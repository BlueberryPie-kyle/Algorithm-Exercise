#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int ans = 0;
    string s;
    while (cin >> s) {  //cin读取到EOF会返回0
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ' && s[i] != '\n') ans++;
        }
    }
    cout << ans;
}

void solve1() {
    int ans = 0;
    string s;
    getline(cin, s);    //直接读取一行，包括空格和别的七七八八的
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ' && s[i] != '\n') ans++;
    }
    cout << ans;
}

void solve2() {
    int ans = 0;
    char a[10];
    fgets(a, 10, stdin);    //利用字符数组，fgets(char*, MaxLength, input)
    int la = strlen(a);
    for (int i = 0; i < la; i++) {
        if (a[i] != ' ' && a[i] != '\n') ans++;
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

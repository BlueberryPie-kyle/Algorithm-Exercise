#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, hash[26];
	cin >> n;
	string s, b, r;
	cin >> s;
	b = s;
	sort(b.begin(), b.end(), [](char a, char b) {
        return a - 'a' < b - 'a';
    });
	n = unique(b.begin(), b.end()) - b.begin();
    b = b.substr(0, n);
    r = b;
    reverse(r.begin(), r.end());
    for (int i = 0; i < n; i++) {
        hash[b[i] - 'a'] = r[i] - 'a';
    }
    for (auto& i : s) i = hash[i - 'a'] + 'a';
    cout << s << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) solve();
}
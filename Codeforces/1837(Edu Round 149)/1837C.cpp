#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
	string str;
	cin >> str;
	if (str[0] == '?') {
		for (char i : str) {
			if (i != '?') {
				str[0] = i;
				break;
			}
		}
	}
	if (str[0] == '?') str[0] = '0';
	for (int i = 1; i < str.length(); i++) {
		if (str[i] == '?') str[i] = str[i - 1];
	}
	cout << str << endl;
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

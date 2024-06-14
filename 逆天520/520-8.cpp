#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<string> pos, ppos, neg, pneg;
	int n;
	cin >> n;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		if (x == 0) {
			string s, ps = "";
			getline(cin, s);
			neg.emplace_back(s);
			s = " " + s;
			int flag = 0;
			for (auto i : s) {
				if (i == ' ') flag = true;
				else {
					if (flag) {
						flag = false;
						ps += i;
					}
				}
			}
			pneg.emplace_back(ps);
		} else {
			string s, ps = "";
			getline(cin, s);
			pos.emplace_back(s);
			s = " " + s;
			int flag = 0;
			for (auto i : s) {
				if (i == ' ') flag = true;
				else {
					if (flag) {
						flag = false;
						ps += i;
					}
				}
			}
			ppos.emplace_back(ps);
		}
	}
}
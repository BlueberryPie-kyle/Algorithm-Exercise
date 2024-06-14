#include <bits/stdc++.h>

using namespace std;

void solve() {
	int x, y;
	cin >> x >> y;
	int cnt = (y + 1) / 2;
	x = max(0, x - cnt * 15 + y * 4);
	cnt += (x + 14) / 15;
	cout << cnt << endl;
}

int main() {
	int t = 0;
	cin >> t;
	while (t--) solve();
}
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, cnt = 0;
	cin >> n;
	vector<int> a(n, 0), b(n, 0);
	for (auto& i : a) cin >> i;
	for (auto& i : b) cin >> i;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] > b[i + cnt]) cnt++;
	}
	cout << cnt << endl;
}

int main() {
	int t = 0;
	cin >> t;
	while (t--) solve();
	return 0;
}
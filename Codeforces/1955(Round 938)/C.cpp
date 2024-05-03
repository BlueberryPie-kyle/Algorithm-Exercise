#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
	long long k;
	cin >> n >> k;
	deque<int> a;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	while (k > 0 && a.size() > 1) {
		int m = min(a.front(), a.back());
		if (k >= 2 * m) {
			k -= 2 * m;
			a.front() -= m;
			a.back() -= m;
		} else {
			k -= 2 * m;
			a.front() -= k / 2 + k % 2;
			a.back() -= k / 2;
		}
		if (a.front() == 0) a.pop_front();
		if (a.back() == 0) a.pop_back();
	}
	int ans = n - a.size();
    cout << ans + (a.size() && a.front() <= k) << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
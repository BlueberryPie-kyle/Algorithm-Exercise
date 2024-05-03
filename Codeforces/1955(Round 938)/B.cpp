#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n * n, 0), b(n * n, 0);
    for (int i = 0; i < n * n; i++) cin >> a[i];
    sort(a.begin(), a.end(), less<>());
	b[0] = a[0];
	for (int i = 1; i < n; i++) b[i] = b[i - 1] + c;
	for (int i = 1; i < n; i++) for (int j = 0; j < n; j++) b[i * n + j] = b[(i - 1) * n + j] + d;
	sort(b.begin(), b.end(), less<>());
	for (int i = 0; i < n * n; i++) if (a[i] != b[i]) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void solve() {
    double n;
    cin >> n;
   	int k = round(sqrt(2 * n));
	n -= (k * (k - 1) / 2);
	if (k % 2 == 0) {
		cout << n << "/" << k - n + 1;
	} else {
		cout << k - n + 1 << "/" << n;
	}
}

int main() {
    int t = 1;
//    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (2 * a > b) {
        cout << b * (n / 2) + a * (n % 2) << endl;
    } else {
        cout << a * n << endl;
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
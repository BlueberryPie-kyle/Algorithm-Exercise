#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    function<void(int, int)> quickSort = [&](int l, int r) {    //qsort template
        if (l >= r) return;
        int i = l - 1, j = r + 1, x = a[((r - l) >> 1) + l];
        while (i < j) {
            do i++; while (a[i] < x);
            do j--; while (a[j] > x);
            if (i < j) swap(a[i], a[j]);
        }
        quickSort(l, j);
        quickSort(j + 1, r);
    };
    quickSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
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

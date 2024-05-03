#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        a[i].first = s[i] - '0';
        a[i].second = i;
    }
    sort(a.begin(), a.end(), [&](pair<int, int> a, pair<int, int> b) {
        return a.first < b.first;
    });
    double pivot = a[n / 2].first;
    if (n & 1) {
        for (auto i : s) {
            int num = i - '0';
            if (num < pivot) cout << ((pivot + a[n / 2 + 1].first) * 0.5) << endl;
            else if (num > pivot) cout << ((pivot + a[n / 2 - 1].first) * 0.5) << endl;
            else cout << double((a[n / 2 - 1].first + a[n / 2 + 1].first) * 0.5) << endl;
        }
    } else {
        for (auto i : s) {
            int num = i - '0';
            if (num < pivot) cout << pivot << endl;
            else cout << double(a[n / 2 - 1].first) << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) {
        int x;
        cin >> x;
        i = abs(300 - x);
    }
    sort(a.begin(), a.end());
    cout << count(a.begin(), a.end(), *a.begin()) << endl;
    return 0;
}
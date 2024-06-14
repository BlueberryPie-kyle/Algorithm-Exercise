#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> card(n), ans(n, 0);
    for (auto& i : card) cin >> i;
    for (int start = 0; start < n; start++) {
        cout << "从" << start << "开始可以取的卡：";
        int num = 1;
        vector<int> check(n + 1, 0);
        for (int i = 0; num < n + 1; i++) {
            int cur = (start + i) % n;
            if (check[num] == 0 and card[cur] == num) {
                cout << num << " ";
                check[num] = 1;
                ans[start] += num;
                num = 1;
            } else num++;
        }
        cout << endl;
    }
    cout << *max_element(ans.begin(), ans.end()) << endl;
    return 0;
}
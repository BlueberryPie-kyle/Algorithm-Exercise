#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define FOR(a, n) for (int i = a, x; i < n; i++)
#define EACH(n) for (auto i : n)
#define endl "\n"
#define first x
#define second y

using namespace std;

typedef long long ll;
const int iMax = INT_MAX;
const int iMin = INT_MIN;
const ll i64Max = LONG_LONG_MAX;
const ll i64Min = LONG_LONG_MIN;

inline int read() {     //快读
    char ch = '*';
    while (!isdigit(ch = getchar()));
    int num = ch - '0';
    while (isdigit(ch = getchar())) num = num * 10 + ch - '0';
    return num;
}

const int MX = 1e6;
vector<int> primes;
int getPrimes = []() {       //欧拉筛
    bool np[MX + 1]{};
    for (int i = 2; i <= MX; ++i) {
        if (!np[i]) primes.push_back(i);
        for (int p: primes) {
            if (i * p > MX) break;
            np[i * p] = true;
            if (i % p == 0) break;
        }
    }
    primes.push_back(MX + 1);
    primes.push_back(MX + 1);
    return 0;
}();                    //该写法意为声明一个自动运行的lambda函数

ll fPow(ll x, ll n) {   //快速幂
    ll result = 1;
    while (n > 0) {
        if (n & 1) result *= x;
        x *= x;
        n >>= 1;
    }
    return result;
}

int gcd(int a, int b) { //最大公因数
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) { //最小公倍数
    return a / gcd(a, b) * b;
}

void solve() {
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define ascend(a) sort(all(a), less<int>())
#define decline(a) sort(all(a), greater<int>())
#define io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define x first
#define y second

using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<long long>;
using pii = pair<int, int>;

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

inline void write(int x) {  //快写
    if(x < 0) putchar('-'),x=-x;
    if(x > 9) write(x / 10);
    putchar(x % 10 + '0');
}

const int MX = 1e6;
vi primes;
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
    io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

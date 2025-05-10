#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
const int MAX = 500000000;

vector<long long> fac(MAX), finv(MAX), inv(MAX);

// 前処理（階乗と逆元）
void init_com() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long comb(int n, int k) {
    if (n < k || k < 0) return 0;
    return fac[n] * finv[k] % MOD * finv[n - k] % MOD;
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    init_com();

    long long res = comb(A + B + C + D, A);
    res = res * comb(B + C + D, B) % MOD;
    res = res * comb(C + D, C) % MOD;

    cout << res << endl;
    return 0;
}

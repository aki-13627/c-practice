#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long res = 1;
    long long limit = 1;
    rep(i, k) limit *= 10;

    for (int i = 0; i < n; i++) {
        if (res > limit / a[i] || (res == limit / a[i] && limit % a[i] == 0)) {
            res = 1;
        } else {
            res *= a[i];
        }
    }

    cout << res << endl;
    return 0;
}

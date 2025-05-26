#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < n; ++i)
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    unordered_set<long long> reserved;
    rep(i, m) {
        long long a;
        cin >> a;
        reserved.insert(a);
    }
    long long q;
    cin >> q;
    vector<pair<long long, long long>> reqs;
    rep(i, q) {
        long long l, r;
        cin >> l >> r;
        reqs.push_back({l, r});
    }
    vector<long long> res;
    for (auto [l, r] : reqs) {
        for (long long i = l; i <= r; ++i) {
            if (i == r) {
                if (!reserved.count(i)) {
                    res.push_back(i);
                    break;
                } else {
                    res.push_back(-1);
                }
            }
            if (!reserved.count(i)) {
                res.push_back(i);
                break;
            } else {
                continue;
            }
        }
    }
    rep(i, res.size()) {
        cout << res[i] << endl;
    }
}

#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < n; ++i)
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> reserved(m);
    rep(i, m) { cin >> reserved[i]; }
    vector<pair<ll, ll>> comp;
    for (ll a : reserved) {
        if (comp.empty() || a > comp.back().second + 1) {
            comp.emplace_back(a, a);
        } else {
            comp.back().second = a;
        }
    }
    ll q; 
    cin >> q;
    rep(_, q) {
        ll l, r; cin >> l >> r;
        ll res = -1;

        auto it = upper_bound(
            comp.begin(), comp.end(), l,
            [](ll v, pair<ll,ll>& p){ return v < p.first; });

        if (it != comp.begin()) {
            --it;
            if (l <= it->second) {
                ll cand = it->second + 1;
                if (cand <= r) res = cand;
            } else {
                res = l;
            }
        } else {
            res = l;
        }

        if (res > r) res = -1;
        cout << res << endl;
    }
    return 0;
}
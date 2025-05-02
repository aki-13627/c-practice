#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> b(n);
    vector<int> w(m);
    rep(i, n) {
        cin >> b.at(i);
    }
    rep(i, m) {
        cin >> w.at(i);
    }
    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());
    vector<ll> sum_b(n+1, 0), sum_w(m+1, 0);
    rep(i, n) {
        sum_b.at(i+1) = sum_b.at(i) + b.at(i);
    }
    rep(i, m) {
        sum_w.at(i+1) = sum_w.at(i) + w.at(i);
    }
    int positiveCount = 0;
    rep(i, n) {
        if(b.at(i) > 0) {
            positiveCount++;
        } else {
            break;
        }
    }

    ll ans = 0;
    int maxK = min(n, m);
    for(int k = 0; k <= maxK; k++){
        ll sum_w_tmp = sum_w.at(k);
        ll sum_b_tmp;
        if(k <= positiveCount) {
            sum_b_tmp = sum_b.at(positiveCount);
        } else {
            sum_b_tmp = sum_b.at(k);
        }
        ans = max(ans, sum_w_tmp + sum_b_tmp);
    }

    cout << ans << endl;
}
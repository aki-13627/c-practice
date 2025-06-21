#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >>n >> m;
    vector<int> diff(n+2, 0);
    for(int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r+1] -=1;
    }

    int cur = 0;
    int ans = INT_MAX;
    for(int i = 1; i <=n; ++i) {
        cur += diff[i];
        ans = min(ans, cur);
    }

    cout << ans << endl;
    return 0;
}
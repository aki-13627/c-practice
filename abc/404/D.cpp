#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> C(MAX, 0);
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        C[a]++;
    }

    if (D == 0) {
        // D = 0 の場合：同じ値は 1 つしか使えない
        int distinct = 0;
        for (int x = 0; x < MAX; ++x) {
            if (C[x] > 0) distinct++;
        }
        cout << (N - distinct) << endl;
        return 0;
    }

    int total = 0;

    // 各 mod D グループごとに処理
    for (int i = 0; i < D; ++i) {
        vector<int> vals;
        // x = i + D * j の形をすべて集める
        for (int x = i; x < MAX; x += D) {
            if (C[x] > 0) vals.push_back(x);
        }

        if (vals.empty()) continue;

        int m = vals.size();
        vector<int> dp(m, 0);
        dp[0] = 0; // 最初は使う

        if (m >= 2) {
            dp[1] = min(C[vals[1]], C[vals[0]]);
        }

        for (int j = 2; j < m; ++j) {
            dp[j] = min(dp[j-1] + C[vals[j]], dp[j-2] + C[vals[j-1]]);
        }

        total += dp[m - 1];
    }

    cout << total << endl;
}

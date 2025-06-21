#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        int n;
        string s;
        cin >> n >> s;

        long long ones = 0;
        long long best = 0;
        long long cur  = 0;

        for (char c : s) {
            int b = (c == '1');
            ones += b;
            cur  += b ? 1 : -1;
            if (cur < 0) cur = 0;
            best = max(best, cur);
        }
        cout << (ones - best) << endl;
    }
    return 0;
}

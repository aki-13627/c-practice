#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) { cin >> a[i]; }
    vector<int> sign;
    vector<int> len;
    int currentSign = 0;
    int currentLen = 0;

    for (int i = 1; i < n; ++i) {
        int diff = a[i] - a[i - 1];
        int s = (diff > 0 ? 1 : -1);

        if (currentLen == 0) {
            currentSign = s;
            currentLen = 1;
        } else if (s == currentSign) {
            currentLen++;
        } else {
            sign.push_back(currentSign);
            len.push_back(currentLen);
            currentSign = s;
            currentLen = 1;
        }
    }
    if (currentLen > 0) {
        sign.push_back(currentSign);
        len.push_back(currentLen);
    }
    long long res = 0;
    for (size_t i = 0; i + 2 < sign.size(); ++i) {
    if (sign[i] == 1 && sign[i + 1] == -1 && sign[i + 2] == 1) {
        res += 1LL * len[i] * len[i + 2];
    }
}
    cout << res << endl;
}
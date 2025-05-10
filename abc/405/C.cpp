#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0, sq_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        sq_sum += a[i] * a[i];
    }

    long long res = (sum * sum - sq_sum) / 2;
    cout << res << endl;
    return 0;
}
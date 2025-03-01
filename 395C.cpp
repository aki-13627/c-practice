#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a.at(i);
    }

    unordered_map<int, int> first_index;
    int min_length = INT_MAX;

    rep(i, n) {
        if (first_index.count(a[i])) {
            min_length = min(min_length, i - first_index[a[i]] + 1);
        } else {
            first_index[a[i]] = i;
        }
    }
    cout << (min_length == INT_MAX ? -1 : min_length) << endl;
}

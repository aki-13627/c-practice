#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i, n) {
        cin >> S[i];
    }

    sort(S.begin(), S.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });

    string result;
    rep(i, n) {
        result += S[i];
    }

    cout << result << endl;

}
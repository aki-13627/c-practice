#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int l = -1;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1]) {
                l = i;
                break;
            }
        }
        if (l == -1) {
            cout << s << endl;
            continue;
        }

        int r = n - 1;
        for (int j = l + 1; j < n; j++) {
            if (s[l] < s[j]) {
                r = j - 1;
                break;
            }
        }
        cout << s.substr(0, l) + s.substr(l + 1, r - l) + s[l] + s.substr(r + 1) << endl;
    }
}
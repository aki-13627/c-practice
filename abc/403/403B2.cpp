#include <bits/stdc++.h>
using namespace std;

int main() {
    string T, U;
    cin >> T >> U;

    int t_len = T.size(), u_len = U.size();

    for (int i = 0; i <= t_len - u_len; i++) {
        bool match = true;

        for (int j = 0; j < u_len; j++) {
            if (T[i + j] != '?' && T[i + j] != U[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

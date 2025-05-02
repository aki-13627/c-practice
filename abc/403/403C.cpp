#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    struct User {
        bool all;
        unordered_set<int> can;
    };

    vector<User> users(N + 1);

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int X, Y;
            cin >> X >> Y;
            users[X].can.insert(Y);
        } else if (type == 2) {
            int X;
            cin >> X;
            users[X].all = true;
        } else if (type == 3) {
            int X, Y;
            cin >> X >> Y;
            if (users[X].all || users[X].can.count(Y)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}
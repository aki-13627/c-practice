#include <bits/stdc++.h>
using namespace std;

int main() {
    string T, U;
    cin >> T >> U;

    vector<int> q_indices;

    for (int i = 0; i < T.size(); i++) {
        if (T[i] == '?') {
            q_indices.push_back(i);
        }
    }

    if (q_indices.size() != 4) {
        cout << "No" << endl;
        return 0;
    }

    string alphabets = "abcdefghijklmnopqrstuvwxyz";

    for (char a : alphabets) {
        for (char b : alphabets) {
            for (char c : alphabets) {
                for (char d : alphabets) {
                    string S = T;
                    S[q_indices[0]] = a;
                    S[q_indices[1]] = b;
                    S[q_indices[2]] = c;
                    S[q_indices[3]] = d;

                    if (S.find(U) != string::npos) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

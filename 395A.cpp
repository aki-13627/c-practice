#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n, '?'));
    for(int i = 1; i < n +1; i++) {
        int j = n + 1 -i;
        if( i <= j ) {
            char color = (i % 2 == 1) ? '#' : '.';
            for(int k = i -1; k < j; k++) {
                for(int l = i -1; l < j; l++ ) {
                    a[k][l] = color;
                }
            }
        }
    }

    for (auto &row : a) {
        for (char cell: row) {
            cout << cell;
        }
        cout << endl;
    }
}
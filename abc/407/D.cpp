#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;

int h, w;
vector<vector<ll>> A;
vector<vector<bool>> placed;

ll max_xor = 0;

void solve(int r, int c, ll current, vector<vector<bool>> &placed) {
    if (r == h) {
        max_xor = max(max_xor, current);
        return;
    }
    int next_r = c + 1 == w ? r + 1 : r;
    int next_c = c + 1 == w ? 0 : c + 1;

    if (placed[r][c]) {
        solve(next_r, next_c, current, placed);
    } else {
        solve(next_r, next_c, current ^ A[r][c], placed);
        if (c + 1 < w && !placed[r][c] && !placed[r][c + 1]) {
            placed[r][c] = true;
            placed[r][c + 1] = true;
            solve(next_r, next_c, current, placed);
            placed[r][c] = false;
            placed[r][c + 1] = false;
        }
        if (r + 1 < h && !placed[r][c] && !placed[r + 1][c]) {
            placed[r][c] = true;
            placed[r + 1][c] = true;
            solve(next_r, next_c, current, placed);
            placed[r][c] = false;
            placed[r + 1][c] = false;
        }
    }
}

int main() {
    cin >> h >> w;
    A.resize(h, vector<ll>(w));
    rep(i, h) {
        rep(j, w) { cin >> A[i][j]; }
    }
    placed.resize(h, vector<bool>(w, false));
    solve(0, 0, 0, placed);

    cout << max_xor << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, n;
    cin >> h >> w >> n;

    vector<vector<int>> row_cells(h + 1), col_cells(w + 1);
    vector<int> row_cnt(h + 1), col_cnt(w + 1);

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        row_cells[x].push_back(y);
        col_cells[y].push_back(x);
        ++row_cnt[x];
        ++col_cnt[y];
    }

    vector<char> row_done(h + 1, 0), col_done(w + 1, 0);

    int q; cin >> q;
    while (q--) {
        int t; cin >> t;
        if (t == 1) {
            int x; cin >> x;
            if (row_done[x]) {
                cout << 0 << endl;
                continue;
            }
            int picked = 0;
            for (int y : row_cells[x]) {
                if (!col_done[y]) {
                    ++picked;
                    --col_cnt[y];
                }
            }
            row_done[x] = 1;
            row_cnt[x] = 0;
            cout << picked << endl;
        } else {
            int y; cin >> y;
            if (col_done[y]) {
                cout << 0 << endl;
                continue;
            }
            int picked = 0;
            for (int x : col_cells[y]) {
                if (!row_done[x]) {
                    ++picked;
                    --row_cnt[x];
                }
            }
            col_done[y] = 1;
            col_cnt[y] = 0;
            cout << picked << endl;
        }
    }
    return 0;
}

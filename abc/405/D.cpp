#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grid(h, vector<char>(w));
    vector<vector<char>> result(h, vector<char>(w));
    vector<vector<int>> dist(h, vector<int>(w, -1));
    queue<pair<int, int>> q;
    
    rep(i, h) {
        for (int j = 0; j < w; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 'E') {
                q.emplace(i, j);
                dist[i][j] = 0;
                result[i][j] = 'E';
            } else if (grid[i][j] == '#') {
                result[i][j] = '#';
            }
        }
    }
    vector<tuple<int, int, char>> dirs = {
        {-1, 0, 'v'}, {1, 0, '^'}, {0, -1, '>'}, {0, 1, '<'}
    };

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
    
        for (auto [dx, dy, arrow] : dirs) {
            int nx = x + dx, ny = y + dy;
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (grid[nx][ny] != '.') continue;
            if (dist[nx][ny] != -1) continue;
    
            dist[nx][ny] = dist[x][y] + 1;
            result[nx][ny] = arrow;
            q.emplace(nx, ny);
        }
    }

    rep(i, h) {
        rep(j, w) {
            if (result[i][j] == 0) result[i][j] = '.';
        }
        cout << string(result[i].begin(), result[i].end()) << '\n';
    }
    
}
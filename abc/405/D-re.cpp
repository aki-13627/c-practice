#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> grid(h, vector<char>(w));
    vector<vector<char>> res(h, vector<char>(w));
    vector<vector<bool>> visited(h, vector<bool>(w, false));

    queue<pair<int , int>> q;

    rep(i, h)  {
        rep(j, w) {
            char x;
            cin >> x;
            if(x == 'E') {
                q.emplace(i, j);
                visited[i][j] = true;
                res[i][j] = x;
            }
            if(x == '#') {
                res[i][j] = x;
            }
            grid[i][j] = x;
        }
    }

    vector<tuple<int, int, char>> dir ={{-1, 0, 'v'}, {1, 0, '^'}, {0, 1, '<'}, {0, -1, '>'}};

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for(auto[dx, dy, arrow]: dir) {
            int nx = x + dx; int ny = y + dy;
            if(nx >= h || nx < 0 || ny >= w || ny < 0) continue;
            if(grid[nx][ny] != '.') continue;
            if(visited[nx][ny]) continue;
            res[nx][ny] = arrow;
            visited[nx][ny] = true;
            q.emplace(nx, ny);
        }
    }

    rep(i, h) {
        rep(j, w) {
            if (res[i][j] == 0) res[i][j] = '.';
        }
        cout << string(res[i].begin(), res[i].end()) << '\n';
    }
}
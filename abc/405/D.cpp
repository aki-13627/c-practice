#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    vector<vector<char>> grid(h + 1, vector<char>(w + 1));
    
    for (int i = 1; i <= h; ++i) {
        for(int j = 1; j <= w; ++i) {
            cin >> grid[i][j];
        }
    }

    vector<vector<bool>> visited(h + 1, vector<bool>(w + 1, false));
    

    vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    
}
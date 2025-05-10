#include <bits/stdc++.h>
using namespace std;

void rotate90(vector<vector<char>> &grid) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = i + 1; j < grid.size(); ++j) {
            swap(grid[i][j], grid[j][i]);
        }
    }
    for (int i = 0; i < grid.size(); ++i) {
        reverse(grid[i].begin(), grid[i].end());
    }
}

void calculateDiff(vector<vector<char>> grid1, vector<vector<char>> grid2, int &currentScore) {
    int N = grid1.size();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(grid1[i][j] != grid2[i][j]) {
                currentScore++;
            }
        }
    }
}

int main() {
    int N;
    cin  >> N;

    int score = INT_MAX;

    vector<vector<char>> S(N, vector<char>(N));
    vector<vector<char>>T(N, vector<char>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> S[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> T[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        vector<vector<char>> rotated = S;
        int currentScore = i;
        for (int j = 0; j < i; ++j) {
            rotate90(rotated);
        }
        calculateDiff(rotated, T, currentScore);
        score = min(score, currentScore);
    }

    cout << score << endl;
    return 0;
}
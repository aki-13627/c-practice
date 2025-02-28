#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));
    
    for (int i = 0; i < N; i ++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cin >> data.at(i).at(j).at(k);
            }
        }
    }

    int count = 0;
    
    for (int i = 0; i < N; i ++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if(data.at(i).at(j).at(k) == 'o'){
                    count ++;
                }
            }
        }
    }

    cout << count << endl;
}
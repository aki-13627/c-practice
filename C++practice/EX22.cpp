#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> data(N, make_pair(0,0));
    for (int i = 0; i < N; i++) {
        cin >> data.at(i).first >> data.at(i).second;
    }

    sort(data.begin(), data.end(), [](pair<int, int> &a, pair<int,int> &b){
       return a.second < b.second;
    });

    for (int i = 0; i < N; i++) {
        cout << data.at(i).first << " " << data.at(i).second << endl;
    }
}
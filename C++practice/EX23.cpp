#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    
    map<int, int> data_map;

    for (auto elem : A) {
        if (data_map.count(elem)) {
            data_map[elem] ++;
        } else {
            data_map[elem] = 1;
        }
    }
    auto max_key_iter = max_element(
        data_map.begin(), data_map.end(),
        [](const pair<int, int> &a,const pair<int, int> &b) {
            return a.second < b.second;
        }
    );

    cout << max_key_iter->first << " " << max_key_iter->second << endl;
}
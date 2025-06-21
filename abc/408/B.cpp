#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i  = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> res;
    for(int i = 0; i < a.size(); ++i) {
        if(i == 0) {
            res.push_back(a[i]);
        } else if(a[i] != a[i-1]) {
            res.push_back(a[i]);
        }
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        if(i == res.size() -1) {
            cout << res[i];
        } else {
            cout << res[i] << " ";
        }
    }
    return 0;
}
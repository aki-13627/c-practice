#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int last = 0;
    bool slept = false;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if(t - last > s) {
            cout << "No" << endl;
            slept = true;
            return 0;
        } else {
            last = t;
        }
    }
    if(slept == false) {
        cout << "Yes" << endl;
    }
    return 0;
}
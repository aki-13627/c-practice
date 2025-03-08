#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a.at(i);
    }

    int count = 1;
    rep(i, n-1) {
        if (a[i] == a[i+1]) {
            count++;
            if (count == 3) {
                break;
            }
        } else {
            count = 1;
        }
    }
    if(count == 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
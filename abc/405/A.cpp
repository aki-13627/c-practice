#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int r, x;
    cin >> r >> x;

    bool result = false;

    if(x == 1) {
        if(r >= 1600 && r <=2999) {
            result = true;
        }
    } else {
        if(r >= 1200 && r <=2399) {
            result = true;
        }
    }

    cout << (result ? "Yes" : "No") << endl;

}
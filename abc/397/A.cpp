#include <bits/stdc++.h>
using namespace std;

int main() {
    float x;
    cin >> x;
    if(x < 37.5) {
        cout << 3 << endl;
    } else if (x >= 38) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
    return 0;
}
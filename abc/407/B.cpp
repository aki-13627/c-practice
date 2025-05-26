#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    double count = 0;
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <=6; j++) {
            if(i + j >= x || abs(i - j) >= y ) {
                count++;
            }
        }
    }
    double res;
    res = count / 36.00;

    cout << fixed << setprecision(10) << res << std::endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> cnt(n, 0);
    for(int i = 0; i < q; i++) {
        int x;
        cin  >> x;
        int min = INT_MAX;
        int minIdx = -1;
        for(int j = 0; j < n; j++) {
            if(min > cnt[j]) {
                minIdx = j;
                min = cnt[j];
            }
        }
        if(x >= 1) {
            cnt[x - 1] ++;
            cout << x << ' ';
        } else if(x == 0) {
            cout << minIdx + 1 << ' ';
            cnt[minIdx]++;
        }
    }
}
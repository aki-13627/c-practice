#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
const int mod = 1e9;
int main() {
    int N, K;
    cin >> N >> K;
    vector<long long> A(N+1);
    long long res = 0;
    for (int i = 0; i <= N; i++) {
        if(i < K) {
            A[i] = 1;
            res = (res + A[i]) % mod;
        } else {
            A[i] = res;
            res = (res + A[i] - A[i-K] + mod) % mod;
        }
    }
    cout << A[N] << endl;
    return 0;
}
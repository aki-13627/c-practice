#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) {
        cin >> A.at(i);
    }
    string a = "Yes";
    rep(i,N-1) {
        if(A.at(i) < A.at(i+1)) {
            continue;
        } else {
            a = "No";
            break;
        }
    }

    cout << a << endl;
}
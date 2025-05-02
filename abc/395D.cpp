#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int N, Q;
    cin >> N >> Q;
    
    vector<int> P(N+1), P_inv(N+1), L(N+1);
    for (int i = 1; i <= N; i++) {
        P[i] = i;
        P_inv[i] = i;
        L[i] = i;
    }

    while(Q--){
        int op;
        cin >> op;
        if(op == 1){
            int a, b;
            cin >> a >> b;
            L[a] = P_inv[b];
        }
        else if(op == 2){
            int a, b;
            cin >> a >> b;
            int x = P_inv[a], y = P_inv[b];
            swap(P[x], P[y]);
            swap(P_inv[a], P_inv[b]);
        }
        else if(op == 3){
            int a;
            cin >> a;
            cout << P[L[a]] << endl;
        }
    }
    
    return 0;
}

#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> q(n);
    rep(i, n) {
        int a, b;
        cin >> a;
        if(a == 1) {
            cin >> b;
            q[i].push_back(a);
            q[i].push_back(b);
        } else{
        q[i].push_back(a);
        }
    }
    vector<int> a(100, 0);
    stack<int,vector<int>> s(a);

    rep(i, n) {
        if(q[i][0] == 1) {
            s.push(q[i][1]);
        } else if(q[i][0] == 2) {
            cout << s.top() << endl;
            s.pop();
        }
    }
}
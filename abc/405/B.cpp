#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    stack<int> A;
    unordered_map<int, int> freq;
    rep(i, n) {
        int a;
        cin >> a;
        A.push(a);
        freq.count(a) ? freq[a]++ : freq[a] = 1;
    }

    int res = 0;

    for(int i = 1; i <= m; ++i){
        if(!freq.count(i)){
            cout << 0 << endl;
            return 0;
        }
    }

    while(!A.empty()) {
        int current = A.top();
        A.pop();
        res++;
        freq[current]--;
        if(freq[current] == 0)  {
            cout << res << endl;
            return 0;
        }
    }

    return 0;
}
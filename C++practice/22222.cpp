#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    string S;
    cin >>  S;
    string result;
    for (int i = 0; i < S.size(); i ++) {
        if(S.at(i) == '2') {
            result += '2';
        }
    }
    cout << result << endl;
}
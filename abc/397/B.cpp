#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int current = 0;
    int count = 0;
    int addedfirst = 0;
    
    if(s[0] != 'i' ) {
        s = 'i' + s;
        count++;
        addedfirst = 1;
    }
    
    for(int i = 0; i < s.size(); i++) {
        //　一個前の文字がoでかつ今の文字がoなら、１文字追加
        if(s[i] == 'o' && current == 0) {
            count++;
        //　一個前の文字がiでかつ今の文字がoなら１文字追加
        } else if(s[i] == 'i' && current == 1) {
            count++;
        } else {
            current = current == 1 ? 0 : 1;
        }
    } 
    //　sの長さと追加した文字列の長さが偶数長さでない場合はカウントを一つ増やす
    if((s.size() + count - addedfirst) % 2 != 0) {
        count++;
    }

    cout << count << endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;
/*
問題：与えられた数字列を二つに分割して、それぞれに含まれる数字の種類の和の最大値を出力する
方針：
    unordered_mapを使って、文字の種類とその数を保持
    左右の数列に含まれる数字の種類を別途保持
    i = 1 ~ n-1までを走破して、順次最大値を更新する
*/
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> leftCount;
    int leftKind = 0;
    unordered_map<int, int> rightCount;
    int rightKind = 0;
    rep(i, n) {
        cin >> a[i];
        if(i == 0) {
            leftCount.insert({a[i], 1});
            leftKind++;
        } else {
            if(!rightCount.count(a[i])) {
                rightCount.insert({a[i], 1});
                rightKind++;
            } else {
                rightCount[a[i]]++;
            }
        }
    }
    int maxCount = leftKind + rightKind;
    int division = 0;
    for(int i = 1; i < n; i++) {
        if(leftCount.count(a[i])) {
            leftCount[a[i]]++;
        } else {
            leftCount.insert({a[i], 1});
            leftKind++;
        }
        rightCount[a[i]]--;
        if(rightCount[a[i]] == 0){
            rightCount.erase(a[i]);
            rightKind--;
        }
        maxCount = max(maxCount, leftKind + rightKind);
     }

     cout << maxCount << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  bitset<26> charSet;
  for (int i = 0; i < S.size(); i++) {
    charSet.set(S[i] - 'a');
  }
  char result;
  for (int i = 0; i < 26; i++ ) {
    if(!charSet.test(i)) {
      result = 'a' + i;
      break;
    }
  }
  
  cout << result << endl;
}
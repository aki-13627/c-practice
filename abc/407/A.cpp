#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int c = a / b;
  int d = a % b;
  
  if(d <= b / 2) {
    cout << c << endl;
  } else {
    cout << c + 1 << endl;
  }
  return 0;
}
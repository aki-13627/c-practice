#include <bits/stdc++.h>
using namespace std;

int64_t culculate_lucas(vector<int64_t> &l, int n) {
  for (int i=2; i < n+1; i++) {
    l.at(i) = l.at(i-1) + l.at(i-2);
  }
  return l.at(n);
}

int main() {
  int N;
  cin >> N;
  
  vector<int64_t> lucas_nums(N+1, 0);
  lucas_nums.at(0) = 2;
  lucas_nums.at(1) = 1;
  
  cout << culculate_lucas(lucas_nums, N) << endl;
}
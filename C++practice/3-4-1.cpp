#include <bits/stdc++.h>
using namespace std;

struct MyPair {
    int x;
    string y;
    MyPair() {}
    MyPair(const MyPair &old) {
        x = old.x + 1;
        y = old.y + "new";
    }
};

int main () {
    MyPair p;
    p.x = 12345;
    p.y = "hello";

    MyPair q(p);

    MyPair r = q;
}
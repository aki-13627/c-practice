#include <bits/stdc++.h>
using namespace std;

struct MyPair {
    int x;
    string y;
    void print() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

// コンストラクタを含むオブジェクト
struct MyPair1 {
    int x;
    string y;
    MyPair1() {
        cout << "constructor called" << endl;
    }
};
struct NumString {
    int length;
    string s;
    NumString(int num) {
        cout << "constructor called" << endl;
        s = to_string(num);
        length = s.size();
    }
};
int main() {
    MyPair p = {12345, "Hello"};
    p.print();

    MyPair q = {67890, "APF4b"};
    q.print();

    MyPair1 p1;
    p1.x = 12345;
    p1.y = "hello";
}
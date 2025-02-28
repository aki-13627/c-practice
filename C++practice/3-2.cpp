#include <bits/stdc++.h>
using namespace std;

string concat(string a, string b) {
    return a + b;
}

int main() {
    pair<string, int> p("abc", 3);
    p.first = "hello";
    p.second = 3;

    p = make_pair("std", 3);
    string s;
    int a;

    tie(s, a) = p;
    tie(ignore, a) = p;

    tuple<int, string, bool> data(1, "ss", true);
    get<2>(data) = false;
    data = make_tuple(2, "world", true);
    int a2;
    string s2;
    bool f;
    tie(a, s, f) = data;

    string a3 = "Hellow,";
    string b3 = "World";
    auto ab = concat(a3, b3);

    vector<int>  c = {1, 2, 3};
    auto d = c;
    for (auto elem : d) {
        cout << elem << endl;
    }

    using type = pair<int, int>;

    type p = {1,1};
    int p1;
    get<1>(p) = p1;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    // map
    map<string, int> score;
    score["Alice"] = 100;
    score["Bob"] = 75;
    score.erase("Bob");

    // queue

    queue<int> q;
    q.push(10);
    q.push(4);
    q.push(3);

    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    q.size();
    q.front();

    priority_queue<int> pq1;
    pq1.push(10);
    pq1.push(3);
    pq1.push(5);
    pq1.push(1);

    while(!pq1.empty()) {
        cout << pq1.top() << endl;
        pq1.pop();
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(3);
    pq.push(5);
    pq.push(1);

    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
    }
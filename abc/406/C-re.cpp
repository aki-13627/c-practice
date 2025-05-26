#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 4) {
        cout << 0 << endl;
        return 0;
    }
    queue<int> p;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        p.push(a);
    }

    vector<pair<int, int>> run;
    int currentSign = 0;
    int currentLen = 1;
    int currentFront = p.front();
    p.pop();

    if (currentFront > p.front()) {
        currentSign = -1;
        currentLen = 2;
    } else {
        currentSign = 1;
        currentLen = 1;
    }
    currentFront = p.front();
    p.pop();

    while (!p.empty()) {
        if (p.front() > currentFront && currentSign == -1) {
            currentFront = p.front();
            p.pop();
            run.push_back({-1, currentLen});
            currentLen = 1;
            currentSign = 1;
        } else if (p.front() < currentFront && currentSign == 1) {
            currentFront = p.front();
            p.pop();
            run.push_back({1, currentLen});
            currentLen = 1;
            currentSign = -1;
        } else {
            currentFront = p.front();
            p.pop();
            currentLen++;
        }
    }
    run.push_back({currentSign, currentLen});
    long long res = 0;
    if (run.size() > 2) {
        for (int i = 0; i < run.size() - 2; ++i) {
            if (run[i].first == 1 && run[i + 1].first == -1 &&
                run[i + 2].first == 1) {
                res += 1LL * run[i].second * run[i + 2].second;
            }
        }
    }
    cout << res << endl;
    return 0;
}
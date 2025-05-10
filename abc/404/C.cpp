#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)

void dfs(int v, vector<bool> &visited, vector<vector<int>> &graph) {
    visited[v] = true;
    for(int to: graph[v]) {
        if(!visited[to]) {
            dfs(to, visited, graph);
        }
    }
}

bool isCycleGraph(int N, int M, const vector<pair<int, int>> &edges) {
    if (N != M) return false;
    vector<int> degree(N + 1, 0);
    vector<vector<int>> graph(N + 1);
    for (auto [u, v] : edges) {
        degree[u]++;
        degree[v]++;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= N; i++) {
        if (degree[i] != 2) {
            return false;
        }
    }

    vector<bool> visited(N+1, false);

    dfs(1, visited, graph);

    for(int i = 1; i <= N; ++i) {
        if(!visited[i]) return false;
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> edges;
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        edges.push_back(make_pair(a, b));
    }

    cout << (isCycleGraph(N, M, edges) ? "Yes" : "No") << endl;
    return 0;
}
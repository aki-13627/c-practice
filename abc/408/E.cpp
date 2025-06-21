#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<vector<pair<int,int>>> g(n+1);
    for (int i=0;i<m;++i){
        int u,v,w; cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    vector<int> dist(n+1, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    dist[1]=0; pq.push({0,1});

    while(!pq.empty()){
        auto [d,v]=pq.top(); pq.pop();
        if(d!=dist[v]) continue;
        for(auto [to,w]:g[v]){
            int nd = d | w;
            if(nd < dist[to]){
                dist[to]=nd;
                pq.push({nd,to});
            }
        }
    }
    cout << dist[n] << '\n';
}

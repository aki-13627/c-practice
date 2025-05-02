#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, ll>>> graph(n+1);
    rep(i, m) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    
    vector<pair<vector<int>, ll>> routes;
    for(auto edge : graph[1]){
        vector<int> initRoute = {1, edge.first};
        ll initXor = edge.second;
        routes.push_back({initRoute, initXor});
    }
    
    ll minXor = numeric_limits<ll>::max();
    
    while(!routes.empty()){
        vector<pair<vector<int>, ll>> next_routes;
        for(auto &state : routes){
            vector<int> route = state.first;
            ll curXor = state.second;
            int last = route.back();
            if(last == n){
                minXor = min(minXor, curXor);
                continue;
            }
            for(auto edge : graph[last]){
                int nxt = edge.first;
                if(find(route.begin(), route.end(), nxt) != route.end())
                    continue;
                vector<int> new_route = route;
                new_route.push_back(nxt);
                ll nextXor = curXor ^ edge.second;
                next_routes.push_back({new_route, nextXor});
            }
        }
        routes = next_routes;
    }

    cout << minXor << endl;
}

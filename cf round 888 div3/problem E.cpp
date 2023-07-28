#include<bits/stdc++.h>
using namespace std;
#define MAX 200005
using ll = long long;

int tc;
ll n, k, f[MAX];
bool vis[MAX];
vector<int> graph[MAX];

ll dfs(int s){
    if(vis[s]){
        return f[s];
    }
    if(graph[s].empty()){
        vis[s] = true;
        return f[s];
    }
    ll res = 0;
    for(auto x : graph[s]){
        res += dfs(x);
    }
    f[s] = min(f[s], res);
    vis[s] = true;
    return f[s];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        memset(vis, false, sizeof(vis));
        for(int i = 1; i <= n; i++) graph[i].clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> f[i];
        }
        for(int i = 1; i <= k; i++){
            int id; cin >> id;
            f[id] = 0;
            vis[id] = true;
        }
        for(int i = 1; i <= n; i++){
            int m; cin >> m;
            for(int j = 1; j <= m; j++){
                int x; cin >> x;
                graph[i].push_back(x);
            }
        }
        for(int i = 1; i <= n; i++){
            cout << dfs(i) << " ";
        }
        cout << "\n";
    }
    return 0;
}

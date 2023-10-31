#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 200005
#define MOD 123456789
#define ii pair<int, int>

int tc, n, k, a, b;
ii tmp = {0,0};
vector<int> g[MAX];
bool check[MAX];

void dfs(int u, vector<int> &dist){
    for(auto x : g[u]){
        if(dist[x] == -1){
            dist[x] = dist[u] + 1;
            if(check[x]) tmp = max(tmp, {dist[x], x});
            dfs(x, dist);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        vector<int> mark, dist, dist_a, dist_b;
        cin >> n >> k;
        for(int i = 1; i <= n; i++) {
            g[i].clear();
            check[i] = false;
        }
        for(int i = 1; i <= k; i++){
            int x; cin >> x;
            check[x] = true;
            mark.push_back(x);
        }
        for(int i = 1; i <= n-1; i++){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dist.resize(n+1, -1);
        dist[mark[0]] = 0;
        tmp = {0, mark[0]};
        dfs(mark[0], dist);
        a = tmp.second;
        dist_a.resize(n+1, -1);
        dist_a[a] = 0;
        tmp = {0, a};
        dfs(a, dist_a);
        b = tmp.second;
        dist_b.resize(n+1, -1);
        dist_b[b] = 0;
        dfs(b, dist_b);
        int ans = INT_MAX;
        for(int i = 1; i <= n; i++){
            ans = min(ans, max(dist_a[i], dist_b[i]));
        }
        cout << ans << "\n";
    }
    return 0;
}

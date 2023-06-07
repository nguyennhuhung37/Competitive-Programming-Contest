#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MAX 2005
#define ii pair<int, int>

int n, m, q;
vector<ii> graph[MAX];
int dist[MAX], trace[MAX];
map<ii, int> thoi_gian;

void Dijkstra(){
    for(int i = 1; i <= n; i++) dist[i] = INF;
    dist[1] = 0;
    trace[1] = 1;
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    pq.push({0, 1});
    while(!pq.empty()){
        ii top = pq.top();
        pq.pop();
        int u = top.second;
        int t = top.first;
        if(dist[u] < t){
            continue;
        }
        for(auto x: graph[u]){
            if(dist[x.first] > t + x.second){
                dist[x.first] = t + x.second;
                trace[x.first] = u;
                pq.push({dist[x.first], x.first});
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    cin >> n >> m >> q;
    for(int i = 1; i <= m; i++){
        int u, v, t; cin >> u >> v >> t;
        graph[u].push_back({v, t});
        thoi_gian[{u, v}] = t;
    }
    Dijkstra();
    for(int i = 1; i <= n; i++) cout << dist[i] << " ";
    while(q--)
    {
        int s, t; cin >> s >> t;
        int change = 0, tmp = s;
        while(trace[tmp] != tmp){
            int parent = trace[tmp];
            change = max(change, thoi_gian[{parent, tmp}] - t);
            tmp = parent;
        }
        cout << dist[s] - change << endl;
    }
    return 0;
}

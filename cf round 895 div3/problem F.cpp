#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>
#define pll pair<ll, ll>

ll tc, n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        vector<ll> next(n+1), w(n+1), d(n+1), used(n+1);
        for(int i = 1; i <= n; i++) cin >> next[i];
        for(int i = 1; i <= n; i++) cin >> w[i];
        for(int i = 1; i <= n; i++){
            d[next[i]] += w[i];
        }
        priority_queue<pll> pq;
        for(ll i = 1; i <= n; i++) pq.push({-d[i], i});
        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            if(used[u]) continue;
            used[u] = 1;
            cout << u << " ";
            d[next[u]] -= w[u];
            pq.push({-d[next[u]], next[u]});
        }
        cout << "\n";
    }
    return 0;
}

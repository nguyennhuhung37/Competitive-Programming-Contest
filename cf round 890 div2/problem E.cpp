#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

ll n, p[MAX], cnt[MAX];
vector<ll> g[MAX];
ll ans = 0;

void dfs(int u){
    set<ll> s;
    s.insert(0);
    ll sum = 0;
    cnt[u] = 1;
    for(auto v : g[u]){
        dfs(v);
        sum += cnt[v];
        unordered_set<ll> tmp;
        for(auto x : s){
            tmp.insert(x + cnt[v]);
        }
        for(auto x : tmp){
            s.insert(x);
        }
        cnt[u] += cnt[v];
    }
    auto itr = s.lower_bound(sum / 2);
    ans += *itr * (sum - *itr);
    s.clear();
}

int main(){
    cin >> n;
    for(ll i = 2; i <= n; i++){
        cin >> p[i];
        g[p[i]].push_back(i);
    }
    dfs(1);
    cout << ans;
    return 0;
}

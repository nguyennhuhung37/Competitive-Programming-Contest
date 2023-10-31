#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
const int N = 5e6;

ll a, b, f[N+5];
bool d[N+5];
set<ll> s;

void build(){
    for(int i = 2; i <= N; i++){
        if(!f[i]) for(int j = i; j <= N; j += i) f[j] = i;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    build();
    memset(d, false, sizeof(d));
    cin >> a >> b;
    ll ans = 0, tmp = a;
    while(a > 1){
        d[f[a]] = true;
        s.insert(f[a]);
        a /= f[a];
    }
    for(auto x : s){
        tmp = tmp / x * (x-1);
    }
    for(ll i = 1; i <= b; i++){
        ll res = i, u = i;
        while(u > 1){
            if(!d[f[u]] && u/f[u] % f[u] != 0) res = res / f[u] * (f[u] - 1);
            u /= f[u];
        }
        ans += tmp * res % MOD;
        ans %= MOD;
    }
    cout << ans;
    return 0;
}

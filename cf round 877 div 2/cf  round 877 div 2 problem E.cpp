#include<bits/stdc++.h>
#define MAX 200005
#define ii pair<int, int>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

ll t, n, m, k;
int a[MAX];

long long fast_pow(ll a, ll b){
    if(b == 0){
        return 1ll;
    }
    ll tmp = fast_pow(a, b/2);
    tmp *= tmp;
    tmp %= MOD;
    if(b % 2 == 0){
        return tmp;
    }
    else{
        return (tmp * a) % MOD;
    }
}

long long C(ll k, ll n){
    if(k == 0){
        return 1ll;
    }
    ll tmp = 1;
    for(ll i = 1; i <= k; i++){
        tmp *= n-i+1; tmp %= MOD;
        tmp *= fast_pow(i, MOD - 2); tmp %= MOD;
    }
    return tmp;
}

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        ll ans = fast_pow(k, m);
        ll tmp = C(0, m);
        ans -= tmp * fast_pow(k - 1, m) % MOD;
        ans = (ans + MOD) % MOD;
        for(int i = 1; i < n; i++){
            tmp = ((tmp * (m - i + 1)) % MOD) * fast_pow(i, MOD - 2);
            tmp %= MOD;
            ans -= tmp * fast_pow(k - 1, m-i) % MOD;
            ans = (ans + MOD) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}

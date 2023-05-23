#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
const ll MOD = 1e9 + 7;
int t, n, m;
ll prefix[200005];
map<int, int> cnt;
vector<ii> save;
ll fastpow(ll x, ll n)
{
    if(n == 0){
        return 1LL;
    }
    ll ret = fastpow(x, n/2);
    (ret *= ret) %= MOD;
    if(n % 2 == 1){
        (ret *= x) %= MOD;
    }
    return ret;
}
int main(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        cnt.clear();
        save.clear();
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            cnt[x]++;
        }
        for(auto x : cnt){
            save.push_back({x.first, x.second});
        }
        prefix[0] = 1LL;
        for(int i = 1; i <= save.size(); i++){
            prefix[i] = ( prefix[i-1] * save[i-1].second ) % MOD;
        }
        ll ans = 0LL;
        for(int i = m; i <= save.size(); i++){
            int r = i - 1;
            int l = r - m + 1;
            if(save[r].first - save[l].first == m - 1){
                ll tmp = (prefix[r+1] * fastpow(prefix[l], MOD - 2)) % MOD;
                (ans += tmp) %= MOD;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

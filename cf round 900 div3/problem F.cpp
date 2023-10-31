#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, q;
const ll N = 1000000;
vector<ll> save;

void sang_nguyen_to(){
    bool vis[N+1];
    for(ll i = 1; i <= N; i++) vis[i] = true;
    for(ll i = 2; i <= N; i++){
        if(vis[i]){
            save.push_back(i);
            for(ll j = i * 2; j <= N; j += i) vis[j] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sang_nguyen_to();
    cin >> tc;
    while(tc--)
    {
        cin >> n >> q;
        map<ll, ll> cnt, ini;
        ll tmp = n;
        for(auto x : save){
            if(tmp == 1) break;
            while(tmp % x == 0){
                cnt[x]++;
                ini[x]++;
                tmp /= x;
            }
        }
        while(q--){
            int type; cin >> type;
            if(type == 1){
            ll x; cin >> x;
            tmp = x;
            for(auto t : save){
                if(tmp == 1) break;
                while(tmp % t == 0){
                    cnt[t]++;
                    tmp /= t;
                }
            }
            if(cnt.empty()){
                cout << "YES\n";
                continue;
            }
            map<ll, ll> mp;
            for(auto x : cnt){
                tmp = x.second + 1;
                for(auto t : save){
                    if(tmp == 1) break;
                    while(tmp % t == 0){
                        mp[t]++;
                        tmp /= t;
                    }
                }
            }
            bool check = true;
            for(auto x : mp){
                if(cnt[x.first] < x.second){
                    check = false;
                    break;
                }
            }
            if(check) cout << "YES\n";
            else cout << "NO\n";
            }
            else{
                cnt = ini;
            }
        }
    }
    return 0;
}

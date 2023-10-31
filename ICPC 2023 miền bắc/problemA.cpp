#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>
const int N = 87;

int tc;
ll n, fibo[N+5];
map<ll, ll> ans[111];

ll f(ll n, ll i){
    if(n == 1) return 1;
    if(ans[i].count(n) == 1) return ans[i][n];
    ll res = 0;
    for(ll t = i; t <= N; t++){
        if(fibo[t] > n) break;
        if(n % fibo[t] == 0){
            ll u = n;
            while(u % fibo[t] == 0){
                u /= fibo[t];
                res += f(u, t+1);
            }
        }
    }
    return ans[i][n] = res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    fibo[0] = 2; fibo[1] = 3;
    for(int i = 2; i <= N; i++) fibo[i] = fibo[i-2] + fibo[i-1];
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        cout << f(n, 0) << "\n";
    }
    return 0;
}

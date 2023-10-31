#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 987654321
#define ii pair<int, int>

int tc;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    tc = 1;
    while(tc--)
    {
        ll n; cin >> n;
        ll a = n, b = n-1, c = n-2, d = n-3;
        if(n % 3 == 0) a /= 3;
        if(n % 3 == 1) b /= 3;
        if(n % 3 == 2) c /= 3;
        if(n % 4 == 0){
            a /= 4; c /= 2;
        }
        if(n % 4 == 1){
            b /= 4; d /= 2;
        }
        if(n % 4 == 2){
            a /= 2; c /= 4;
        }
        if(n % 4 == 3){
            b /= 2; d /= 4;
        }
        a %= MOD; b %= MOD; c %= MOD; d %= MOD;
        ll res = (1 + (((n%MOD) * ((n - 3)%MOD) / 2) % MOD) + ((a*b)%MOD)*((c*d)%MOD)) % MOD;
        cout << res;
    }
    return 0;
}

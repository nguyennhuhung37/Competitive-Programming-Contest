#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int tc, f[75], mu[75], n, a[75];

int main(){;
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    for(int i = 2; i <= 70; i++){
        if(!f[i]) for(int j = i; j <= 70; j += i) f[j] = i;
    }
    mu[1] = 1;
    for(int i = 2; i <= 70; i++){
        int x = i;
        map<int, int> mp;
        while(x > 1){
            mp[f[x]]++;
            x /= f[x];
        }
        bool check = false;
        for(auto x : mp){
            if(x.second > 1){
                check = true;
                break;
            }
        }
        if(check) break;
        mu[i] = (mp.size() & 1 ? -1 : 1);
    }
    cin >> tc;
    while(tc--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        int g[75];
        for(int x = 1; x <= 70; x++){
            g[x] = 1;
            for(int i = 1; i <= n; i++){
                if(a[i] % x == 0){
                    g[x] *= 2;
                    g[x] %= MOD;
                }
            }
            g[x]--;
        }
        int ans = 0;
        for(int x = 1; x <= 70; x++){
            int tmp = 0;
            for(int i = 1; i * x <= 70; i++){
                tmp += g[x*i] * mu[i];
                tmp %= MOD;
            }
            (ans += tmp * x) %= MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}

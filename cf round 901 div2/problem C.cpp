#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, m;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        if(n % m == 0){
            cout << 0 << "\n";
            continue;
        }
        int k = 0;
        while(!(m & (1 << k))) k++;
        ll ans = 0;
        int tu = n % m, mau = m;
        for(int i = 1; i <= k; i++){
            if(tu >= mau/pow(2, i)){
                ans += (ll)mau/pow(2, i) * (ll)(pow(2, i) - 1);
                tu -= mau/pow(2, i);
            }
        }
        if(tu) cout << -1 << "\n";
        else cout << ans << "\n";
    }
    return 0;
}

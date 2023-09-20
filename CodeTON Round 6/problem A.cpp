#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, k, x;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k >> x;
        if(n < k || x < k-1){
            cout << -1 << "\n";
            continue;
        }
        ll ans = k * (k-1) / 2;
        if(k >= x){
            ans += (k-1) * (n - k);
        }
        else{
            ans += x * (n - k);
        }
        cout << ans << "\n";
    }
    return 0;
}

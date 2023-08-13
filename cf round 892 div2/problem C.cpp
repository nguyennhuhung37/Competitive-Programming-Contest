#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 300005

int tc;
ll n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        ll ans = (n-2) * (n-1) * (2*n-3) / 6 + (n-1) * n;
        for(ll i = n-3; i >= 1; i--){
            ll tmp = i * (i+1) * (2*i+1) / 6;
            ll m = 0;
            for(ll j = i + 1, k = n; j <= n; j++, k--){
                tmp += j * k;
                m = max(m, j * k);
            }
            tmp -= m;
            if(tmp < ans)
                break;
            ans = tmp;
        }
        cout << ans << "\n";
    }
    return 0;
}

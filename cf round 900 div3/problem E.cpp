#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, q, a[MAX], st[18][MAX];

ll f(ll l, ll r){
    ll k = 0;
    while(1 << (k+1) <= (r - l + 1)) k++;
    return st[k][l] & st[k][r - (1 << k) + 1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) st[0][i] = a[i];
        for(int j = 1; j <= 18; j++){
            for(int i = 1; i + (1 << j) - 1 <= n; i++)
                st[j][i] = st[j-1][i] & st[j-1][i + (1 << (j-1))];
        }
        cin >> q;
        while(q--){
            ll x, y;
            cin >> x >> y;
            if(a[x] < y){
                cout << -1 << " ";
                continue;
            }
            ll ans, l = x, r = n;
            while(l <= r){
                ll mid = (l + r) / 2;
                if(f(x, mid) >= y){
                    ans = mid;
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}

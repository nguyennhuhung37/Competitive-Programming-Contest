#include<bits/stdc++.h>
using namespace std;
using ll = long long;
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
        unordered_map<ll, ll> cnt;
        for(int i = 1; i <= n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        int q; cin >> q;
        while(q--){
            ll x, y;
            cin >> x >> y;
            ll z = sqrt(x*x - 4*y);
            if(z * z != x*x - 4*y){
                cout << 0 << " ";
                continue;
            }
            ll a = (x + z) / 2, b = (x - z) / 2;
            cout << (a == b ? cnt[a] * (cnt[a] - 1) / 2 : cnt[a] * cnt[b]) << " ";
        }
        cout << "\n";
    }
    return 0;
}

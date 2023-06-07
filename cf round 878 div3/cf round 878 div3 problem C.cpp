#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 200005


int main(){
    ll t, a[MAX], ans;
    ll n, k, q;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> q;
        ans = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        ll l = 1, r = 1;
        while(l <= n && r <= n){
            if(a[l] > q){
                l++;
                continue;
            }
            r = l + 1;
            while(a[r] <= q && r <= n){
                r++;
            }
            if(r - l < k){
                l = r;
                continue;
            }
            else{
                ans += (r - l - k + 1) * (r - l - k + 2) / 2;
                l = r;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

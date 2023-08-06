#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 200005

int tc;
ll n, k, a[MAX], cp[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        ll l = 0, r = *max_element(a + 1, a + n + 1) + k, ans = 0;
        while(l <= r){
            ll m = (l + r) / 2;
            bool check = false;
            for(int i = 1; i <= n; i++){
                ll c_used = 0;
                vector<ll> min_need(n+1);
                min_need[i] = m;
                for(int j = i; j <= n; j++){
                    if(a[j] >= min_need[j]) break;
                    if(j == n) {
                        c_used = k + 1;
                        break;
                    }
                    c_used += min_need[j] - a[j];
                    min_need[j+1] = max(0LL, min_need[j]-1);
                }
                if(c_used <= k){
                    check = true;
                    break;
                }
            }
            if(check){
                ans = m;
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

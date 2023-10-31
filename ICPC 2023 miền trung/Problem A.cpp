#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005
#define MOD 1000000007
#define ii pair<int, int>

ll n, a[MAX], sum[MAX], m[MAX], ans = 0;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    sum[0] = 0;
    for(ll i = 1; i <= n; i++){
        if(sum[i-1] == 0){
            sum[i] = max(0ll, a[i]);
            m[i] = sum[i];
        }
        else{
            sum[i] = max(0ll, sum[i-1] + a[i]);
            m[i] = max(m[i-1], a[i]);
        }
        ans = max(ans, sum[i] - m[i]);
    }
    cout << ans;
    return 0;
}

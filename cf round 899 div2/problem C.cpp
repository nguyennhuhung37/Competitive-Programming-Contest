#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

ll tc, n, a[MAX], sum[MAX] = {0};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        memset(sum, 0, sizeof(sum));
        for(int i = n; i >= 1; i--){
            sum[i] = sum[i+1] + max(0ll, a[i]);
        }
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            ll tmp = (i & 1 ? a[i] : 0) + sum[i+1];
            ans = max(ans, tmp);
        }
        cout << ans << "\n";
    }
    return 0;
}

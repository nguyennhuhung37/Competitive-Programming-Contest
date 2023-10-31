#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, c[MAX], dp[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0; i <= n; i++) {
            c[i] = 0;
            dp[i] = INT_MAX;
        }
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x < n) c[x]++;
        }
        ll m = 0;
        while(c[m]) m++;
        dp[m] = 0;
        for(ll i = m; i >= 1; i--) for(ll j = 0; j < i; j++) dp[j] = min(dp[j], dp[i] + (c[j] - 1) * i + j);
        cout << dp[0] << "\n";
    }
    return 0;
}

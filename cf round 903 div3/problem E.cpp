#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 123456789
#define ii pair<int, int>

int tc, n, a[MAX], dp[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        dp[n+1] = 0;
        for(int i = n; i >= 1; i--){
            dp[i] = max(dp[i+1], (i + a[i] > n) ? 0 : dp[i+a[i]+1] + a[i] + 1);
        }
        cout << n - dp[1] << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005
#define MOD 998244353
#define ii pair<int, int>

int tc, n, a[MAX], q;
string s;
int dp[3][MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        cin >> s;
        for(int i = 0; i < 3; i++) dp[i][0] = 0;
        for(int i = 1; i <= n; i++){
            char x = s[i-1];
            dp[2][i] = dp[2][i-1] ^ a[i];
            if(x == '0'){
                dp[0][i] = dp[0][i-1] ^ a[i];
                dp[1][i] = dp[1][i-1];
            }
            else{
                dp[0][i] = dp[0][i-1];
                dp[1][i] = dp[1][i-1] ^ a[i];
            }
        }
        cin >> q;
        while(q--){
            int tp; cin >> tp;
            if(tp == 1){
                int l, r; cin >> l >> r;
                dp[0][n] ^= dp[2][l-1] ^ dp[2][r];
                dp[1][n] ^= dp[2][l-1] ^ dp[2][r];
            }
            else if(tp == 2){
                int g; cin >> g;
                cout << dp[g][n] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int tc;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        int n, m; cin >> n >> m;
        int r; cin >> r;
        bool free[n+1][m+1][r+1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                for(int k = 0; k <= r; k++){
                    free[i][j][k] = true;
                }
            }
        }
        for(int id = 1; id <= r; id++){
            int t, d, coord; cin >> t >> d >> coord;
            if(d == 1){
                for(int j = 0; j <= m; j++){
                    if(0 <= t - coord - j && t - coord - j <= r){
                        free[coord][j][t - coord - j] = false;
                    }
                }
            }
            else{
                for(int i = 0; i <= n; i++){
                    if(0 <= t - coord - i && t - coord - i <= r){
                        free[i][coord][t - coord - i] = false;
                    }
                }
            }
        }
        bool dp[n+1][m+1][r+1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                for(int k = 0; k <= r; k++){
                    dp[i][j][k] = !(i || j || k);
                    if(free[i][j][k]){
                        if(i && dp[i-1][j][k]){
                            dp[i][j][k] = true;
                        }
                        if(j && dp[i][j-1][k]){
                            dp[i][j][k] = true;
                        }
                        if(k && dp[i][j][k-1]){
                            dp[i][j][k] = true;
                        }
                    }
                }
            }
        }
        int ans = -1;
        for(int k = r; k >= 0; k--){
            if(dp[n][m][k]){
                ans = n + m + k;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

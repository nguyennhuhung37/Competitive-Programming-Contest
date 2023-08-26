#include<bits/stdc++.h>
using namespace std;
#define MAX 3005
#define ii pair<int, int>
using ll = long long;

int tc, n;
int s[MAX][MAX], sum[MAX][MAX], cheo1[MAX][MAX], cheo2[MAX][MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0; i <= n+1; i++){
            for(int j = 0; j <= n+1; j++){
                sum[i][j] = 0;
                cheo1[i][j] = 0;
                cheo2[i][j] = 0;
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                char x; cin >> x;
                s[i][j] = x - '0';
                sum[i][j] = s[i][j] + cheo1[i-1][j-1] + sum[i-1][j] + cheo2[i-1][j+1];
                if(sum[i][j] & 1){
                    ans++;
                    s[i][j] = 1;
                }
                else{
                    s[i][j] = 0;
                }
                sum[i][j] = s[i][j] + cheo1[i-1][j-1] + sum[i-1][j] + cheo2[i-1][j+1];
                cheo1[i][j] = s[i][j] + cheo1[i-1][j-1];
                cheo2[i][j] = s[i][j] + cheo2[i-1][j+1];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

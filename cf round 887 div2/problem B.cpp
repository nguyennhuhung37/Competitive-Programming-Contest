#include<bits/stdc++.h>
using namespace std;

int tc, n, k;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int fi = i, se = n;
            bool check = true;
            for(int j = 1; j <= k-2; j++){
                int tmp = fi;
                fi = se - tmp;
                se = tmp;
                if(fi > se || min(fi, se) < 0){
                    check = false;
                    break;
                }
            }
            if(check) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}

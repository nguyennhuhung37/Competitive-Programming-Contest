#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005

int t, n, a[MAX];
bool vis[256];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        for(int i = 0; i < 256; i++) vis[i] = false;
        vis[0] = true;
        cin >> n;
        for(int i = 1 ; i <= n; i++) cin >> a[i];
        int ans = 0;
        int cur_xor = 0;
        for(int i = 1; i <= n; i++){
            cur_xor ^= a[i];
            for(int j = 0; j < 256; j++){
                if(vis[j]){
                    ans = max(ans, j ^ cur_xor);
                }
            }
            vis[cur_xor] = true;
        }
        cout << ans << endl;
    }
    return 0;
}

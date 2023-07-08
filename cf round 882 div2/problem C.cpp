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
        memset(vis, false, sizeof(vis));
        vis[0] = true;
        cin >> n;
        for(int i = 1 ; i <= n; i++) cin >> a[i];
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < 256; j++){
                if(vis[j]){
                    vis[j^a[i]] = true;
                    if(ans < j^a[i]){
                        ans = j^a[i];
                        cout << "j: " << j << " i:" << i << endl;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

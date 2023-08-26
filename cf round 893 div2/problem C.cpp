#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005
#define ii pair<int, int>

int tc, n;
bool vis[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) vis[i] = false;
        for(int i = 1; i <= n; i++){
            if(vis[i]){
                continue;
            }
            cout << i << " ";
            vis[i] = true;
            int tmp = i;
            while(tmp <= n/2){
                for(int j = 2; tmp * j <= n; j++){
                    if(!vis[tmp * j]){
                       cout << tmp * j << " ";
                       vis[tmp * j] = true;
                       tmp *= j;
                       break;
                    }
                    if(tmp * (j+1) > n) tmp = n;
                }
            }
        }
        for(int i = n/2+1; i <= n; i++){
            if(!vis[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

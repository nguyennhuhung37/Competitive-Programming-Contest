#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, k, a[MAX], t = 0, tgr = 0, tim[MAX], vis[MAX];
bool check;

bool dfs(int i){
    vis[i] = tgr;
    tim[i] = t++;
    if(vis[a[i]]){
        if(vis[a[i]] != tgr) return true;
        return (tim[i] - tim[a[i]] + 1 == k);
    }
    dfs(a[i]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++) vis[i] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        check = true;
        if(k == 1){
            for(int i = 1; i <= n; i++){
                if(a[i] != i){
                    check = false;
                    break;
                }
            }
            cout << (check ? "YES\n" : "NO\n");
            continue;
        }
        t = 0;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                tgr++;
                check = dfs(i);
                if(!check) break;
            }
        }
        cout << (check ? "YES\n" : "NO\n");
    }
    return 0;
}

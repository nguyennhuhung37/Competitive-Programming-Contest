#include<bits/stdc++.h>
using namespace std;
#define MAX 200005
using ll = long long;

int tc;
ll n, a[MAX];
bool vis[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        memset(vis, false, sizeof(vis));
        bool check;
        cin >> n;
        for(int i = 1; i < n; i++){
            cin >> a[i];
        }
        if(a[n-1] > n * (n+1) / 2){
            cout << "NO" << "\n";
            continue;
        }
        else if(a[n-1] == n * (n+1) / 2) check = true;
        else check = false;
        ll cnt = 0;
        for(int i = n-1; i >= 1; i--){
            a[i] -= a[i-1];
            if(a[i] > n) continue;
            if(!vis[a[i]]){
                cnt++;
                vis[a[i]] = true;
            }
        }
        if(cnt == n - 2 && check) cout << "YES" << "\n";
        else if(cnt == n-1 && !check) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}

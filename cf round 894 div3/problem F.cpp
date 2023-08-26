#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc;
ll w, f, n, s[MAX];
bool vis[1000005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> w >> f >> n;
        ll sum = 0;
        vector<ll> save;
        memset(vis, false, sizeof(vis));
        save.push_back(0); vis[0] = true;
        for(int i = 1; i <= n; i++){
            cin >> s[i];
            sum += s[i];
            int x = save.size();
            for(int j = 0; j < x; j++){
                if(!vis[save[j] + s[i]]){
                   save.push_back(save[j] + s[i]);
                   vis[save[j] + s[i]] = true;
                }
            }
        }
        ll ans, l = 0, r = 1000000;
        while(l <= r){
            ll m = (l+r) / 2;
            ll a = m * w, b = m * f;
            bool check = false;
            for(auto x : save){
                if(a >= x && b >= sum - x){
                    check = true;
                    break;
                }
            }
            if(check){
                ans = m;
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

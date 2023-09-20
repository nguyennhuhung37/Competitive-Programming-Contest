#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
int n, k, a[MAX], l[MAX], r[MAX];
bool vis[MAX] , tmp[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        for(int i = 1; i <= k; i++) {
            vis[i] = false;
            l[i] = INT_MAX;
            r[i] = 0;
        }
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            vis[a[i]] = true;
        }
        set<ii> s;
        for(int i = 1; i <= k; i++) tmp[i] = false;
        for(int i = 1; i <= n; i++){
            l[a[i]] = min(l[a[i]], i);
            if(tmp[a[i]]) continue;
            tmp[a[i]] = true;
            s.insert({a[i], i});
            auto it = s.upper_bound({a[i], i});
            if(it == s.end()) continue;
            l[a[i]] = min(l[a[i]], it->second);
        }
        s.clear();
        for(int i = 1; i <= k; i++) tmp[i] = false;
        for(int i = n; i >= 1; i--){
            r[a[i]] = max(r[a[i]], i);
            if(tmp[a[i]]) continue;
            tmp[a[i]] = true;
            s.insert({a[i], i});
            auto it = s.upper_bound({a[i], i});
            if(it == s.end()) continue;
            r[a[i]] = max(r[a[i]], it->second);
        }
        for(int i = 1; i <= k; i++){
            if(!vis[i]){
                cout << 0 << " ";
                continue;
            }
            cout << (r[i] - l[i] + 1) * 2 << " ";
        }
        cout << "\n";
    }
    return 0;
}

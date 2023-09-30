#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        set<int> t;
        vector<int> save[51];
        bool s[51][51];
        memset(s, false, sizeof(s));
        for(int i = 1; i <= n; i++){
            int k; cin >> k;
            while(k--){
                int x; cin >> x;
                save[i].push_back(x);
                s[x][i] = true;
                t.insert(x);
            }
        }
        int ans = 0;
        for(auto x : t){
            set<int> tmp;
            for(int i = 1; i <= n; i++){
                if(s[x][i]) continue;
                for(auto j : save[i]){
                    tmp.insert(j);
                }
            }
            int siz = tmp.size();
            ans = max(ans, siz);
        }
        cout << ans << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n;
vector<int> save[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) save[i].clear();
        set<int> s;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            while(x--){
                int tmp; cin >> tmp;
                s.insert(tmp);
                save[i].push_back(tmp);
            }
        }
        if(n == 1){
            cout << 0 << "\n";
            continue;
        }
        int ans = 0;
        for(int i = 1; i < n; i++){
            bool check[55];
            for(auto x : save[i]){
                check[x] = true;
            }
            int tmp = save[i].size();
            if(tmp < s.size()) ans = max(ans, tmp);
            for(int j = i+1; j <= n; j++){
                int cnt = 0;
                for(auto x : save[j]){
                    if(!check[x]) cnt++;
                }
                if(tmp + cnt < s.size()) ans = max(ans, tmp + cnt);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

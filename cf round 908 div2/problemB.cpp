#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define ii pair<int, int>
using ll = long long;

int tc;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        map<int, int> mp;
        vector<int> save;
        for(auto x : a){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second > 1) save.push_back(x.first);
        }
        if(save.size() < 2){
            cout << -1 << "\n";
            continue;
        }
        int cnt = 0;
        vector<int> res(n, 1);
        for(auto x : save){
            int tmp = 0;
            for(int i = 0; i < n; i++){
                if(cnt == 0) if(a[i] == x){
                    if(tmp == 0) res[i] = 1;
                    else res[i] = 2;
                    tmp++;
                }
                if(cnt == 1) if(a[i] == x){
                    if(tmp == 0) res[i] = 1;
                    else res[i] = 3;
                    tmp++;
                }
                if(cnt >= 2) if(a[i] == x) res[i] = 3;
            }
            cnt++;
        }
        for(int i = 0; i < n; i++) cout << res[i] << " ";
        cout << "\n";
    }
    return 0;
}

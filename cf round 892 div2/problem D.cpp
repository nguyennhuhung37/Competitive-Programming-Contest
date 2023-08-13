#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 200005

int tc, n, q;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        vector<ii> v;
        map<int, int> mp;
        cin >> n;
        for(int i = 1; i <= n; i++){
            int l, r, a, b; cin >> l >> r >> a >> b;
            v.push_back({l, b});
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            int x = v[i].first, y = v[i].second;
            if(i == n-1){
                mp[x] = y;
                continue;
            }
            for(int j = i+1; j < n; j++){
                if(v[j].first > y){
                    mp[x] = y;
                    i = j-1;
                    break;
                }
                if(j == n-1){
                    mp[x] = max(y, v[j].second);
                    i = n;
                }
                y = max(y, v[j].second);
            }
        }
        cin >> q;
        while(q--){
            int x; cin >> x;
            auto it = mp.upper_bound(x);
            if(it == mp.begin()){
                cout << x << " ";
                continue;
            }
            it--;
            if(it->second < x){
                cout << x << " ";
                continue;
            }
            cout << it->second << " ";
        }
        cout << "\n";
    }
    return 0;
}

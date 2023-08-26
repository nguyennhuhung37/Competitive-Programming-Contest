#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, x;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> x;
        vector<int> ans;
        ans.push_back(x);
        for(int i = 0; i <= 32; i++){
            if(x == 1 << i) break;
            if(x & (1 << i)){
                x -= (1 << i);
                ans.push_back(x);
            }
        }
        while(x > 1){
            x /= 2;
            ans.push_back(x);
        }
        cout << ans.size() << "\n";
        for(auto x : ans){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

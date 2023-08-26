#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, x, y, n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> x >> y >> n;
        int tmp = x;
        vector<int> ans;
        ans.push_back(x);
        for(int i = n-1; i >= 1; i--){
            tmp += i;
            if(tmp > y){
                ans.clear();
                ans.push_back(-1);
                break;
            }
            ans.push_back(tmp);
        }
        if(ans[0] == -1){
            cout << -1 << "\n";
            continue;
        }
        int d = y - ans[n-1];
        for(int i = 1; i < n; i++)
            ans[i] += d;
        for(auto x : ans){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

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
        int n, k; cin >> n >> k;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        vector<bool> vis(n+1, false);
        int tmp = n;
        string ans = "Yes";
        while(k--){
            if(tmp == 0 || vis[tmp]){
                break;
            }
            if(a[tmp] > n){
                ans = "No";
                break;
            }
            vis[tmp] = true;
            tmp = (tmp + n - a[tmp]) % n;
        }
        cout << ans << "\n";
    }
    return 0;
}

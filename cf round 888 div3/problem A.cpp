#include<bits/stdc++.h>
using namespace std;

int tc, n, m, k, h;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m >> k >> h;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(abs(h-x) % k == 0 && abs(h - x) / k < m && h != x) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

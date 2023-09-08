#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n, d, s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int ans = INT_MAX;
        for(int i = 1; i <= n; i++){
            cin >> d >> s;
            ans = min(ans, d + (s + 1) / 2 - 1);
        }
        cout << ans << "\n";
    }
    return 0;
}

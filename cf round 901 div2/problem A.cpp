#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, a, b, n, x[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b >> n;
        ll ans = (ll)b;
        for(int i = 1; i <= n; i++) {
            cin >> x[i];
            ans += min((ll)a-1, (ll)x[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}

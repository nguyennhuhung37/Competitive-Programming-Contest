#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
const ll MOD = 1e9 + 7;
int t;
int gcd(int a, int b) {if (b == 0) return a; return gcd(b, a % b);}
ll a[200001], b[200001];
ll n;
void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    ll ans = 1;
    ll x = 1;
    for(ll  i = 1; i <= n; i++){
        while(b[x] < a[i] && x <= n) x++;
        x--;
        if(x < i){
            cout << 0 << endl;
            return;
        }
        ans *= x - i + (ll)1;
        ans %= MOD;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

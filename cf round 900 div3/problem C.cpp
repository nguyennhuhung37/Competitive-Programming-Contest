#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, k, x;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k >> x;
        ll a = (k + 1) * k / 2, b = (2*n - k +1) * k / 2;
        if(a <= x && x <= b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

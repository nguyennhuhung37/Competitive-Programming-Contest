#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc;
ll n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        ll x = sqrt(n * 2) + 1;
        if(x * (x-1) / 2 > n) x--;
        ll ans = x + n - x * (x-1) / 2;
        cout << ans << "\n";
    }
    return 0;
}

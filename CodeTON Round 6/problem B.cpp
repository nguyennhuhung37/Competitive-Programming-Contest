#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, m, a[MAX], b[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        ll B = 0, tmp = 0, Min = INT_MAX;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            tmp ^= a[i];
        }
        for(int i = 1; i <= m; i++){
            cin >> b[i];
            B |= b[i];
            Min = min(Min, b[i]);
        }
        ll x = 0, y = 0;
        for(int i = 1; i <= n; i++){
            x ^= (a[i] | Min);
            y ^= (a[i] | B);
        }
        if(n & 1){
            cout << min(tmp, x) << " " << y << "\n";
        }
        else{
            cout << y << " " << max(tmp, x) << "\n";
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

int tc, n;
ll a[MAX], b[MAX];

ll f(ll x, ll y){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(x == y) return 2;
    if(x < y){
        if((y / x) % 2 == 1){
            return f(y % x, x) + (y/x+1) / 2 * 3 - 1;
        }
        else{
            return f(x, y % x) + (y/x) / 2 * 3;
        }
    }
    else{
        if((x / y) % 2 == 1){
            return f(y, x % y) + (x/y) / 2 * 3 + 1;
        }
        else{
            return f(x % y, y) + (x/y) / 2 * 3;
        }
    }
}

void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    ll tmp;
    bool check = false;
    for(int i = 1; i <= n; i++){
        if(!a[i] && !b[i]) continue;
        if(!check) {
            tmp = f(a[i], b[i]) % 3;
            check = true;
        }
        if(f(a[i], b[i]) % 3 != tmp){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main(){
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

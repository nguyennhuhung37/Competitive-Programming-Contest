#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tc;
ll n, m, k;

void solve()
{
    cin >> n >> m >> k;
    int x, y; cin >> x >> y;
    bool ok = true;
    while(k--)
    {
        int a, b; cin >> a >> b;
        if(abs(a + b - x - y )% 2 == 0){
            ok = false;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

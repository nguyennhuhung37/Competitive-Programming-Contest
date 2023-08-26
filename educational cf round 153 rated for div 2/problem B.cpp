#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005
#define ii pair<int, int>

int tc;
ll m, k, a1, ak;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> m >> k >> a1 >> ak;
        ll x = min(m / k, ak);
        m -= x * k;
        if(m <= a1){
            cout << 0 << "\n";
            continue;
        }
        ll tmp = (m - a1) / k;
        if(tmp * k == m - a1) cout << tmp << "\n";
        else if(m < k * (tmp + 1)) cout << tmp + m - a1 - k*tmp << "\n";
        else cout << tmp+1+ max(0ll, m - (tmp+1)*k - a1) << "\n";
    }
    return 0;
}

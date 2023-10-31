#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n, m, k;
ll a[MAX], b[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m >> k;
        ll suma = 0, sumb = 0, mina = INT_MAX, maxa = 0, minb = INT_MAX, maxb = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            suma += a[i];
            mina = min(mina, a[i]);
            maxa = max(maxa, a[i]);
        }
        for(int i = 1; i <= m; i++) {
            cin >> b[i];
            sumb += b[i];
            minb = min(minb, b[i]);
            maxb = max(maxb, b[i]);
        }
        if(mina <= maxb){
            suma = suma - mina + maxb;
        }
        if(k % 2 == 0){
            suma = suma - max(maxa, maxb) + min(mina, minb);
        }
        cout << suma << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, a[MAX], k;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
         ll t = 1e18;
         cin >> n;
         for(int i = 1; i <= n; i++) cin >> a[i];
         cin >> k;
         for(int i = n; i; i--){
             a[i-1] = min(a[i-1], a[i]);
             a[i] -= a[i-1];
         }
         for(int i = 1; i <= n; i++){
            if(a[i]){
                t = min(t, k / a[i]);
            }
            cout << t << " ";
            k -= t * a[i];
         }
         cout << "\n";
    }
    return 0;
}

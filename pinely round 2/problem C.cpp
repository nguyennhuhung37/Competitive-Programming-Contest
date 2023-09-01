#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc;
ll n, k, a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        ll sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum += a[i];
        }
        a[n+1] = n * (n+1) / 2 - sum;
        ll tmp = (n * k) % (n+1);
        for(ll i = tmp; i < tmp + n; i++){
            ll x = i % (n+1) + 1;
            cout << a[x] << " ";
        }
        cout << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 1000005

int tc;
set<ll> nums;

void solve()
{
    ll n; cin >> n;
    if(nums.count(n)){
        cout << "YES" << endl;
        return;
    }
    ll tmp = sqrt(n);
    if(1 + tmp + tmp * tmp == n && tmp != 1){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main(){
    for(ll k = 2; k <= 1000000; k++){
        ll val = 1 + k;
        ll p = k*k;
        for(ll cnt = 3; cnt <= 63; cnt++){
            val += p;
            if(val > 1e18) break;
            nums.insert(val);
            if(p > (ll)(1e18) / k) break;
            p *= k;
        }
    }
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

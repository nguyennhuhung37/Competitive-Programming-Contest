#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
vector<ll> v;
void solve()
{
    int n; cin >> n;
    v.clear();
    for(int i = 1; i <= n; i++){
        ll x; cin >> x;
        if(v.empty() || x != v[v.size()-1]) v.push_back(x);
    }
    int ans = 1;
    if(v.size() != 1) ans = 2;
    for(int i = 1; i < v.size()-1 ; i++){
        if( ((v[i] - v[i-1]) * (v[i] - v[i+1])) > (ll) 0 ) ans++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

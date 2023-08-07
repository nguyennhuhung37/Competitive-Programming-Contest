#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int query(int l, int r){
    if(l == r) return 0;
    cout << "? " << l << " " << r << endl;
    int res;
    cin >> res;
    return res;
}

int solve(int l, int r)
{
    if(l == r) return l;
    int m = (l+r) / 2;
    int a = solve(l, m);
    int b = solve(m+1, r);
    int r1, r2;
    r1 = query(a, b-1);
    r2 = query(a, b);
    if(r1 == r2){
        return b;
    }
    else{
        return a;
    }
}

void solve()
{
    int n; cin >> n;
    int ans = solve(1, n);
    cout << "! " << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve()
{
    ii a[2001];
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        a[i] = {x, i};
    }
    int l, r;
    ii Max = {1, 1};
    for(int i = 2 ; i <= n; i++) Max = max(Max, a[i]);
    r = Max.second - 1;
    if(r == n-1 && a[1].first > a[n-1].first){
            l = n; r = n;
        }
    else{
       Max = {1, 1};
       for(int i = 1; i <= r; i++){
           Max = max(Max, a[i]);
       }
       if(Max.second == 1){
           l = r;
       }
       else{
           l = r-1;
           while(a[l].first > a[1].first) l--;
           l++;
       }
    }
    for(int i = r + 1; i <= n; i++) cout << a[i].first << " ";
    for(int i = r; i >= l; i--) cout << a[i].first << " ";
    for(int i = 1; i <= l-1; i++) cout << a[i].first << " ";
    cout << endl;
}
int main(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
}

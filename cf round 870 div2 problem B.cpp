#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int t;
void solve()
{
    int n; cin >> n;
    int a[100001];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int i = 1, j = n, ans = 0;
    while(i <= j){
        ans = gcd(ans, abs(a[i] - a[j]));
        i++; j--;
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

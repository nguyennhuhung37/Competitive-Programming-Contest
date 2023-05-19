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
ii a[100001];
int b[100001], ans[100001];
void solve()
{
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        a[i] = {x, i};
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; i++){
        int tmp = a[i].second;
        ans[tmp] = b[i];
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
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

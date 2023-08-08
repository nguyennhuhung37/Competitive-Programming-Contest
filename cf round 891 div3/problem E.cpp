#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005
#define ii pair<ll, ll>

int tc;
ll n, ans[MAX];
ii a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(ll i = 1; i <= n; i++){
            ll x; cin >> x;
            a[i] = {x, i};
        }
        if(n == 1){
            cout << 1 << "\n";
            continue;
        }
        sort(a + 1, a + n + 1);
        ll sum = n;
        for(ll i = 2; i <= n; i++){
            if(a[i].first == a[i-1].first)
                continue;
            sum += (n + 1 - i) * (a[i].first - a[i-1].first);
        }
        ans[a[1].second] = sum;
        for(int i = 2; i <= n; i++){
            if(a[i].first == a[i-1].first){
                ans[a[i].second] = ans[a[i-1].second];
                continue;
            }
            ll tmp = ans[a[i-1].second];
            tmp += 2*i - n - 2 + (a[i].first - a[i-1].first - 1) * (2*i - n - 2);
            ans[a[i].second] = tmp;
        }
        for(int i = 1; i <= n; i++){
            cout << ans[i] <<" ";
        }
        cout << "\n";
    }
    return 0;
}

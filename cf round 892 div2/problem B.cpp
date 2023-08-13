#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 300005

int tc, n;
ll a[MAX];
vector<ll> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        ll Min = INT_MAX;
        v.clear();
        for(int id = 1; id <= n; id++){
            int m; cin >> m;
            for(int i = 1; i <= m; i++){
                cin >> a[i];
                Min = min(Min, a[i]);
            }
            sort(a + 1, a + m + 1);
            v.push_back(a[2]);
        }
        ll ans = Min;
        sort(v.begin(), v.end());
        for(int i = 1; i < v.size(); i++)
            ans += v[i];
        cout << ans << "\n";
    }
    return 0;
}

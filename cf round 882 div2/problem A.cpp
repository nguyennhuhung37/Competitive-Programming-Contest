#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int t;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int ans = 0, a[n+1];
        vector<int> v;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 2; i <= n; i++){
            ans += abs(a[i] - a[i-1]);
            v.push_back(abs(a[i] - a[i-1]));
        }
        sort(v.begin(), v.end(), greater<int>());
        for(int i = 0; i < k-1; i++){
            ans -= v[i];
        }
        cout << ans << endl;
    }
    return 0;
}

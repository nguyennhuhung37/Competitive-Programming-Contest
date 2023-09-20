#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n, ans[MAX];
ii a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a + 1, a + n + 1);
        for(int i = 1; i <= n; i++){
            int j = n - i + 1;
            ans[a[i].second] = j;
        }
        for(int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}

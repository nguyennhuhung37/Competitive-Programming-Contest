#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 200005

int tc, n, a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        int m = 0, ans = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] < m) ans = m;
            m = max(m, a[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}

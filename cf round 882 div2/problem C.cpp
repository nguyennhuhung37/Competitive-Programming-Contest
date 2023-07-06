#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005

int t, n, a[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1 ; i <= n; i++) cin >> a[i];
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int tmp = 0;
            for(int j = i; j <= min(n, i + 255); j++){
                tmp ^= a[j];
                ans = max(ans, tmp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}

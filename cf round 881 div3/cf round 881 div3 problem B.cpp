#include<bits/stdc++.h>
using namespace std;
#define MAX 200005
using ll = long long;

int t, n;
ll  a[MAX];

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        ll ans = 0, cnt = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] >= 0) ans += a[i];
            else{
                int r = i;
                while(a[r] <= 0 && r <= n) {
                    ans -= a[r];
                    r++;
                }
                cnt++;
                i = r - 1;
            }
        }
        cout << ans << " " << cnt << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

long long t, xa, ya, xb, yb, xc, yc;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        long long ans = 1;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        if((xa - xb) * (xa - xc) >= 0){
            ans += min(abs(xa-xb), abs(xa-xc));
        }
        if((ya - yb) * (ya - yc) >= 0){
            ans += min(abs(ya-yb), abs(ya-yc));
        }
        cout << ans << "\n";
    }
    return 0;
}

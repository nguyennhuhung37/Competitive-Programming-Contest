#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll t, n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll s = 0, mx = 0, g = 0, u = 0, w = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            s += x;
            if(s > mx){
                mx = s;
            }
            g = mx - s;
            if(g > u){
                u = g;
                w = mx;
            }
        }
        cout << w << "\n";
    }
    return 0;
}

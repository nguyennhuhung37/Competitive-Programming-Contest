#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005
#define ii pair<int, int>

ll tc, n, a[MAX];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        ll s = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            s += a[i];
        }
        s /= 2;
        ll res = 0;
        sort(a + 1, a + n + 1);
        for(int i = n; i >= 1; i--){
            if(a[i] <= s) {
                s -= a[i];
                a[i] = 0;
                res++;
            }
            else
            if(s){
                a[i] -= s;
                s = 0;
                res++;
            }
        }
        for(int i = 1; i <= n; i++) res += a[i];
        cout << res << "\n";
    }
    return 0;
}

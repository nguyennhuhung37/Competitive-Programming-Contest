#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 123456789
#define ii pair<int, int>

int tc, a[3];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        string ans = "NO";
        if(a[1] % a[0] == 0 && a[2] % a[0] == 0){
            int x = a[1] / a[0], y = a[2] / a[0];
            if(x + y <= 5) ans = "YES";
        }
        cout << ans << "\n";
    }
    return 0;
}

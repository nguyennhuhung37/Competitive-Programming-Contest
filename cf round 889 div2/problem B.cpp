#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tc;
ll n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
         cin >> n;
         ll ans = 1;
         while(n % ans == 0){
            ans++;
         }
         cout << ans - 1 << '\n';
    }
    return 0;
}

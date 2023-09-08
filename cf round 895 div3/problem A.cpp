#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, a, b, c;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
         cin >> a >> b >> c;
         if(a == b){
            cout << 0 << "\n";
            continue;
         }
         cout << (abs(a - b) - 1) / (2*c) + 1 << "\n";
    }
    return 0;
}

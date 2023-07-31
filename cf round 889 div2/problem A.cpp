#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tc, n;

int main(){
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x == i) ans++;
        }
        cout << (ans+1) / 2 << "\n";
    }
    return 0;
}

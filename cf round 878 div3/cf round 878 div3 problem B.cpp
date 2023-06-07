#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>

int t;

int main(){
    cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        if(k >= 30) k = 30;
        int ans;
        if(n + 1 >= pow(2, k)) ans = pow(2, k);
        else ans = n + 1;
        cout << ans << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005

int tc, n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int sum = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            sum += x;
        }
        if(sum % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

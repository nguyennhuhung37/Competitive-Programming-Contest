#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, l, r;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> l >> r;
        if(r <= 3){
            cout << -1 << "\n";
            continue;
        }
        if(l != r){
        if(r % 2 != 0){
            r--;
        }
        cout << 2 << " " << r-2 << "\n";
        continue;
        }
        bool check = false;
        for(int i = 2; i * i <= r; i++){
            if(r % i == 0){
                cout << i << " " << r - i << "\n";
                check = true;
                break;
            }
        }
        if(!check) cout << -1 << "\n";
    }
    return 0;
}

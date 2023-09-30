#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n, a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        int tmp = 1;
        for(int i = 1; i <= n; i++){
            if(tmp == a[i]) tmp++;
            tmp++;
        }
        cout << tmp - 1 << "\n";
    }
    return 0;
}

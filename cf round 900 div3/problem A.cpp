#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n, k, a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        bool check = false;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            if(a[i] == k) check = true;
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}

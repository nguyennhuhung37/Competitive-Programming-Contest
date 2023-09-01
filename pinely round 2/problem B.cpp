#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n;
bool check[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) check[i] = false;
        check[0] = true;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(!check[x-1]) ans++;
            check[x] = true;
        }
        cout << ans << "\n";
    }
    return 0;
}

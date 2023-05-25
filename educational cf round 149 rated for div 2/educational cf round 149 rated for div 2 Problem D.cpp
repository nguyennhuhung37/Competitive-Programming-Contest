#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair< int, ii >
int t;
int a[200005];
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, mi = 1e9, ma = -1e9;
    bool visited[3];
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
           if(x >= 0){
               a[i] = 1;
           }
           else{
               a[i] = 2;
           }
           x++;
        }
        else{
            if(x <= 0){
                a[i] = 2;
            }
            else{
                a[i] = 1;
            }
            x--;
        }
        mi = min(mi, x);
        ma = max(ma, x);
    }
    if(x != 0) cout << -1 << endl;
    else{
        if(mi * ma == 0) {
            cout << 1 << endl;
            for(int i = 1; i <= n; i++) cout << 1 << " ";
            cout << endl;
        }
        else {
            cout << 2 << endl;
            for(int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

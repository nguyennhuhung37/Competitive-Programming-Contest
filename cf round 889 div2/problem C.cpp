#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005
#define ii pair<int, int>

int tc, n, m, l[MAX], r[MAX];
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m >> s;
        s = " " + s;
        l[0] = 0;
        for(int i = 1; i <= n; i++){
            if(s[i] == '1') l[i] = l[i-1];
            else l[i] = i;
        }
        r[n+1] = n+1;
        for(int i = n; i >= 1; i--){
            if(s[i] == '0') r[i] = r[i+1];
            else r[i] = i;
        }
        set<ii> save;
        while(m--){
            int x, y; cin >> x >> y;
            x = r[x]; y = l[y];
            if(x >= y) x = y = 0;
            save.insert({x, y});
        }
        cout << save.size() << "\n";
    }
    return 0;
}

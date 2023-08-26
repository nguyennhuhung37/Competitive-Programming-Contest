#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, m;
string s[105];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
            cin >> s[i];
        string key = "vika";
        int tmp = 0;
        for(int i = 0; i < m; i++){
            if(tmp == 4) break;
            for(int j = 0; j < n; j++){
                if(s[j][i] == key[tmp]){
                    tmp++;
                    break;
                }
            }
        }
        if(tmp == 4) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 123456789
#define ii pair<int, int>

int tc, n;
string s[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        map<ii, bool> check;
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(check[{i, j}]) continue;
                char a = s[i][j]; check[{i, j}] = true;
                char b = s[j][n-1-i]; check[{j, n-1-i}] = true;
                char c = s[n-1-i][n-1-j]; check[{n-1-i, n-1-j}] = true;
                char d = s[n-1-j][i]; check[{n-1-j, i}] = true;
                ans += max({a, b, c, d})* 4 - a - b - c - d;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

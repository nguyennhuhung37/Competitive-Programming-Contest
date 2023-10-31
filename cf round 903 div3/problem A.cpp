#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 123456789
#define ii pair<int, int>

int tc, n, m;
string x, s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        cin >> x >> s;
        bool check = false;
        int ans = -1, cnt = 0;
        while(x.size() < s.size() * 4 || cnt <= 2){
            for(int i = 0; i+m-1 < x.size(); i++){
                if(x.substr(i, m) == s){
                    ans = cnt;
                    check = true;
                    break;
                }
            }
            if(check) break;
            x += x;
            cnt++;
        }
        cout << ans << "\n";
    }
    return 0;
}

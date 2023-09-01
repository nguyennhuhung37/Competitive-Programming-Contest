#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, a, q;
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> a >> q;
        cin >> s;
        if(n == a){
            cout << "YES" << "\n";
            continue;
        }
        int now = a, cnt = 0;
        for(auto x : s){
            if(x == '+'){
                now++;
                cnt++;
            }
            else{
                now--;
            }
            if(now == n) break;
        }
        if(now == n) cout << "YES" << "\n";
        else if(a + cnt >= n) cout << "MAYBE" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}

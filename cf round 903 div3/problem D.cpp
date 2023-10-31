#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 1000005
#define MOD 123456789
#define ii pair<int, int>

int tc, n, a[10005], f[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    f[1] = 1;
    for(int i = 2; i < MAX; i++){
        if(!f[i]){
            for(int j = i; j < MAX; j += i){
                f[j] = i;
            }
        }
    }
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        map<int, int> cnt;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            while(x > 1){
                cnt[f[x]]++;
                x /= f[x];
            }
        }
        string ans = "YES";
        for(auto x : cnt){
            if(x.second % n != 0){
                ans = "NO";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> cnt;
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        string tmp = s.substr(i, 2);
        if(cnt[tmp] == 0){
            ans++;
        }
        cnt[tmp]++;
    }
    cout << ans << endl;
}
int main(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
}

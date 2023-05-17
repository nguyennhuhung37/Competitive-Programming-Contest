#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
string key = "codeforces";
void solve()
{
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < 10; i++){
        if(s[i] != key[i]) ans++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

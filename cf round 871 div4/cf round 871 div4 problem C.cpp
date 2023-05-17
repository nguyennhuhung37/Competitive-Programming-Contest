#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
int x[200001];
string s[200001];
void solve()
{
    int n; cin >> n;
    int ans;
    int min1 = INT_MAX, min2 = INT_MAX;
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i] >> s[i];
        if(s[i][0] == '1') min1 = min(min1, x[i]);
        if(s[i][1] == '1') min2 = min(min2, x[i]);
    }
    if(min1 == INT_MAX || min2 == INT_MAX){
        cout << -1 << endl; return;
    }
    ans = min1 + min2;
    for(int i = 1; i <= n; i++){
        if(s[i] == "11" && x[i] < ans){
            ans = x[i];
        }
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

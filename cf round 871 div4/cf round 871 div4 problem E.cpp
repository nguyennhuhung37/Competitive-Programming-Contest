#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t, n, m;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};
bool check(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
int s[1001][1001];
int bfs(int i, int j)
{
    int ans = 0;
    queue<ii> q;
    q.push({i, j});
    ans += s[i][j];
    s[i][j] = 0;
    while(!q.empty()){
        ii v = q.front();
        q.pop();
        for(int x = 0; x < 4; x++){
            int a = v.first + dx[x], b = v.second + dy[x];
            if(check(a, b) && s[a][b] != 0){
                ans += s[a][b];
                s[a][b] = 0;
                q.push({a, b});
            }
        }
    }
    return ans;
}
void solve()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++){
        cin >> s[i][j];
    }
    int res = 0;
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++){
        if(s[i][j] != 0){
            res = max(res, bfs(i, j));
        }
    }
    cout << res << endl;
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

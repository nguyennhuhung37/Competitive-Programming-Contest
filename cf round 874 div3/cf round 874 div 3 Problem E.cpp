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
set<int> S[200001];
int deg[200001];
bool visited[200001];
void solve()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++) S[i].clear();
    for(int i = 1; i <= n; i++){
        visited[i] = false;
        int x; cin >> x;
        S[i].insert(x);
        S[x].insert(i);
    }
    for(int i = 1; i <= n; i++){
        deg[i] = S[i].size();
    }
    int cnt_1 = 0, cnt_2 = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            bool ok = true;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            if(deg[i] != 2) ok = false;
            while(!q.empty()){
                int u = q.front();
                q.pop();
                for(auto x : S[u]){
                    if(!visited[x]){
                        visited[x] = true;
                        q.push(x);
                        if(deg[x] != 2) ok = false;
                    }
                }
            }
            if(ok) cnt_1++;
            else cnt_2++;
        }
    }
    cout << cnt_1 + min(1, cnt_2) << " " << cnt_1 + cnt_2 << endl;
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

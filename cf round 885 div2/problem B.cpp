#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

int tc;
int n, k;
int id[MAX];
priority_queue<int> pq[MAX];
int ans = 1e9;

void solve()
{
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        id[i] = 0;
        priority_queue<int> tmp;
        swap(pq[i], tmp);
    }
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        int dis = i - id[x] - 1;
        pq[x].push(dis);
        id[x] = i;
    }
    for(int i = 1; i <= k; i++){
        pq[i].push(n - id[i]);
    }
    ans = 1e9;
    for(int i = 1; i <= k; i++){
        int a = pq[i].top(); pq[i].pop();
        int b = pq[i].top();
        ans = min(ans, max(a / 2, b));
    }
    cout << ans << endl;
}

int main(){
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

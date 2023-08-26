#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc;
ll n, m, d, a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m >> d;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        ll tmp = 0, ans = 0;
        priority_queue<ll, vector<ll>, greater<ll> > pq;
        for(int i = 1; i <= n; i++){
            if(a[i] <= 0) continue;
            if(pq.empty() || pq.size() < m){
                pq.push(a[i]);
                tmp += a[i];
                ans = max(ans, tmp - i*d);
            }
            else{
                if(a[i] <= pq.top()) continue;
                tmp -= pq.top();
                pq.pop();
                tmp += a[i];
                pq.push(a[i]);
                ans = max(ans, tmp - i*d);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

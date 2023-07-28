#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, k, a[MAX];

int main(){
    cin >> tc;
    while(tc--)
    {
         cin >> n >> k;
         priority_queue<ii> pq;
         for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x % k == 0) x = k;
            else x %= k;
            pq.push({x, -i});
         }
         while(pq.top().first > 0){
            ii top = pq.top();
            pq.pop();
            top.first = max(0, top.first - k);
            if(top.first == 0) cout << -top.second << " ";
            pq.push(top);
         }
         cout << "\n";
    }
    return 0;
}

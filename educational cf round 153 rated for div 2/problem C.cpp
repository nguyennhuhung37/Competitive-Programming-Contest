#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, a[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        int tmp = INT_MAX, ans = 0;
        priority_queue<ii, vector<ii>, greater<ii>> pq;
        for(int i = 1; i <= n; i++){
            if(pq.empty()){
                pq.push({a[i], i});
                continue;
            }
            ii top = pq.top();
            if(a[i] > top.first){
                if(a[i] < tmp){
                    ans++;
                    tmp = a[i];
                }
            }
            pq.push({a[i], i});
        }
        cout << ans << "\n";
    }
    return 0;
}

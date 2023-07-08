#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MAX 200005
#define ii pair<int, int>
#define iii pair<ii, int>

int t, n, m, h;

signed main(){
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> h;
        iii Rudolf;
        vector<iii> v;
        for(int i = 1; i <= n; i++){
            priority_queue<int, vector<int>, greater<int> > pq;
            for(int j = 1; j <= m; j++){
                int x; cin >> x;
                pq.push(x);
            }
            int ex = 0, time = 0, pel = 0;
            while(!pq.empty()){
                int top = pq.top();
                pq.pop();
                if(time + top <= h){
                    ex++;
                    time += top;
                    pel += time;
                }
                else{
                    break;
                }
            }
            if(i == 1){
                Rudolf = {{ex, -pel}, -1};
            }
            v.push_back((iii){{ex, -pel}, -i});
        }
        sort(v.begin(), v.end(), greater<iii>());
        cout << find(v.begin(), v.end(), Rudolf) - v.begin() + 1 << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define fi first
#define se second

int t, n, m, q;
pair<int, int> p[MAX];
int a[MAX];

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            cin >> p[i].first >> p[i].second;
        }
        cin >> q;
        for(int i = 1; i <= q; i++){
            cin >> a[i];
        }
        int l = 0, r = q + 1;
        while(l < r){
            int mid = l + (r-l) / 2;
            int prefix[n+1] = {0};
            for(int i = 1; i <= mid; i++) prefix[a[i]] = 1;
            for(int i = 2; i <= n; i++) prefix[i] += prefix[i-1];
            bool check = false;
            for(int i = 1; i <= m; i++){
                if(p[i].se - p[i].fi + 1 < (prefix[p[i].se] - prefix[p[i].fi - 1]) * 2){
                    check = true;
                    break;
                }
            }
            if(check){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ((r == q + 1) ? -1 : r) << endl;
    }
    return 0;
}

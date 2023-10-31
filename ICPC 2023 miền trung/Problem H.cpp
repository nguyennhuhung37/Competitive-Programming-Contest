#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005

int n, m;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    vector<int> a(n); for(int& x : a) cin >> x;
//    sort(a.begin(), a.end());
    int ans = -1;
    while(m--){
        int x, y, z; cin >> x >> y >> z;
        if(z == 0) continue;
        int l = 0, r = -1;
        int can = 0;
        int smallest_i = n;
        for(int i = 0; i < n; i++){
            while(r + 1 <= i && a[i] - a[r+1] >= x) r++;
            while(a[i] - a[l] > y) l++;
            if(r >= l) can += r - l + 1;
            if(can >= z){
                smallest_i = i;
                break;
            }
        }
        ans = max(ans, smallest_i);
    }
    if(ans >= n) cout << -1;
    else if (ans == -1) cout << 0;
    else cout << a[ans];
    return 0;
}

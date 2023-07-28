#include<bits/stdc++.h>
using namespace std;
#define MAX 200005

int tc, a[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        int n, k; cin >> n >> k;
        int cnt = 0, tmp = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            if(a[i] == a[1]){
                cnt++;
            }
            if(cnt == k){
                tmp = i;
                break;
            }
        }
        if(cnt < k){
            cout << "NO" << endl;
            continue;
        }
        if(a[1] == a[n]){
            cout << "YES" << endl;
            continue;
        }
        cnt = 0;
        for(int i = n; i > tmp; i--){
            if(a[i] == a[n]) cnt++;
        }
        if(cnt >= k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

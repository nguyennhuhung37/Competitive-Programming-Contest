#include<bits/stdc++.h>
using namespace std;
#define MAX 100005

int t;

int main(){
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n+1];
        map<int, int> cnt;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        if(cnt[1] >= cnt[-1]){
            if(cnt[-1] % 2 == 0){
                cout << 0 << endl;
            }
            else cout << 1 << endl;
        }
        else{
            int ans = (cnt[-1] - cnt[1] + 1) / 2;
            cnt[-1] -= ans;
            if(cnt[-1] % 2 == 0) cout << ans << endl;
            else cout << ans + 1 << endl;
        }
    }
    return 0;
}

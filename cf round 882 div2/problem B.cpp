#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

int t, n, a[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int ans = 0, tmp = a[1];
        for(int i = 1; i <= n; i++){
            tmp &= a[i];
            if(tmp == 0){
                ans++;
                tmp = a[i+1];
            }
        }
        cout << max(1, ans) << endl;
    }
    return 0;
}

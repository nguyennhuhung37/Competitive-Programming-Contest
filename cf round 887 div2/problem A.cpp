#include<bits/stdc++.h>
using namespace std;

int tc, n, a[505];

int main(){
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int m = INT_MAX;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(i >= 2){
                m = min(m, a[i] - a[i-1]);
            }
        }
        if(m < 0) cout << 0 << endl;
        else cout << m/2 + 1 << endl;
    }
    return 0;
}

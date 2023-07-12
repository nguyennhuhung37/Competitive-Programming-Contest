#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

ll tc;
ll n, a[MAX];

int main(){
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        a[0] = 0;
        ll x = 0, y = 0, m = -1e9;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            m = max(m, a[i]);
            if(i % 2 == 0) y += max((ll)0, a[i]);
            else x += max((ll)0, a[i]);
        }
        if(m <= 0){
            cout << m << endl;
            continue;
        }
        cout << max(x, y) << endl;
    }
    return 0;
}

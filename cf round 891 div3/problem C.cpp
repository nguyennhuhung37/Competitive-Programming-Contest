#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 500005

int tc;
ll n, b[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        ll m = n * (n-1) / 2;
        for(int i = 1; i <= m; i++){
            cin >> b[i];
        }
        sort(b + 1, b + m + 1);
        int id = 1;
        cout << b[id] << " ";
        for(int i = n-1; i >= 2; i--){
            id += i;
            cout << b[id] << " ";
        }
        cout << b[id] << "\n";
    }
    return 0;
}

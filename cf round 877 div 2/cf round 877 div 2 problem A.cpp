#include<bits/stdc++.h>
#define MAX 105
#define ii pair<int, int>
using namespace std;
using ll = long long;

int t, n, a[MAX];

int main(){
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        int Max = 0, Min = 10000000;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            Max = max(Max, a[i]);
            Min = min(Min, a[i]);
        }
        if(Min < 0){
            cout << Min << endl;
        }
        else cout << Max << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define MAX 1005
using namespace std;
using ll = long long;

int t, n, m;
int main(){
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<int> v;
        if(n == 4){
            v = {3, 1, 4, 2};
        }
        else{
            for(int i = 1; i <= n; i += 2) v.push_back(i);
            for(int i = 2; i <= n; i += 2) v.push_back(i);
        }
        for(int i = 0; i < n; i++){
            for(int j = 1; j <= m; j++){
                cout << (v[i] - 1) * m + j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

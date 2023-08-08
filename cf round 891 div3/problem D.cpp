#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005

int tc;
ll a[MAX], b[MAX], n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        vector<int> v;
        ll tmp = -1e9 * 2;
        for(int i = 1; i <= n; i++){
            if(a[i] - b[i] > tmp){
                v.clear();
                v.push_back(i);
            }
            else if(a[i] - b[i] == tmp){
                v.push_back(i);
            }
            tmp = max(tmp, a[i] - b[i]);
        }
        cout << v.size() << "\n";
        for(auto x : v){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

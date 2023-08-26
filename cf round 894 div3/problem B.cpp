#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, a[MAX];
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        v.clear();
        cin >> n;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x == 1) v.push_back(1);
            else{
                v.push_back(x);
                v.push_back(1);
            }
        }
        cout << v.size() << "\n";
        for(auto x : v){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

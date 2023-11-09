#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005
#define ii pair<int, int>

int tc, n, q, a[MAX];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> q;
        for(int i = 1; i <= n; i++) cin >> a[i];
        vector<int> save;
        while(q--){
            int x; cin >> x;
            if(save.empty()){
                save.push_back(x);
                continue;
            }
            if(save[save.size()-1] > x) save.push_back(x);
        }
        for(int i = 1; i <= n; i++){
            for(auto x : save){
                if(a[i] % (1 << x) == 0) a[i] += 1 << (x-1);
            }
        }
        for(int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}

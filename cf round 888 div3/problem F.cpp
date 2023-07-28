#include<bits/stdc++.h>
using namespace std;
#define ii pair<int, int>
#define MAX 200005

int tc, n, k;
ii a[MAX];// fi la gia tri; se la id

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            a[i] = {x, i};
        }
        sort(a + 1, a + n + 1);
        int m = 1<<k;
        for(int i = 1; i < n; i++){
            m = min(m, a[i].first ^ a[i+1].first);
        }
        for(int i = 1; i < n; i++){
            if((int)(a[i].first^a[i+1].first) == m){
                cout << a[i].second << " " << a[i+1].second << " " << (((1<<k) - 1) ^ a[i].first) << "\n";
                break;
            }
        }
    }
    return 0;
}

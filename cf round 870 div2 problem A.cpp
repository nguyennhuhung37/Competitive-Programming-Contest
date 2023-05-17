#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>

int t;
void solve()
{
    int n; cin >> n;
    int a[105];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    if(!a[1]) {
        cout << 0 << endl; return;
    }
    for(int i = 1; i < n; i++){
        if(a[i] > i && a[i+1] <= i){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

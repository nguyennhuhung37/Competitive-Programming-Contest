#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int a[200001];
void solve()
{
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int> > chan, le;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x <= 0){
            cout << "NO" << endl;
            return;
        }
        if(x % 2 == 0) chan.push(x);
        else le.push(x);
    }
    if(chan.empty() || le.empty()){
        cout << "YES" << endl;
    }
    else{
        if(le.top() < chan.top()){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
int main(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
}

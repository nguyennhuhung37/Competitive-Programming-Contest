#include<bits/stdc++.h>
using namespace std;

int tc, n;

void solve()
{
        cin >> n;
        queue<int> a, b;
        priority_queue<int, vector<int>, greater<int> > x, y;
        for(int i = 1; i <= n; i++){
            int t; cin >> t;
            if(t % 2 == 0){
                a.push(i);
                x.push(t);
            }
            else{
                b.push(i);
                y.push(t);
            }
        }
        int tmp = 0;
        for(int i = 1; i <= n; i++){
            if(!a.empty() && i == a.front()){
                 if(tmp > x.top()){
                    cout << "NO" << "\n";
                    return;
                 }
                 tmp = x.top();
                 x.pop();
                 a.pop();
            }
            else if(!b.empty() && i == b.front()){
                if(tmp > y.top()){
                    cout << "NO" << "\n";
                    return;
                }
                tmp = y.top();
                y.pop();
                b.pop();
            }
        }
        cout << "YES" << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

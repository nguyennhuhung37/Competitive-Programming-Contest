#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int t, n, k, x;
bool check[105];
vector<int> ans;

bool solve(int n, int k, int x){
    if(n < 0){
        return false;
    }
    for(int i = 1; i <= k; i++){
        if(i == x){
            continue;
        }
        if(i == n){
            ans.push_back(i);
            return true;
        }
        if(solve(n-i, k, x)){
            ans.push_back(i);
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> x;
        for(int i = 1; i <= n; i++) check[i] = false;
        ans.clear();
        if(solve(n, k, x)){
            cout << "YES" << "\n";
            cout << ans.size() << "\n";
            for(auto x : ans){
                cout << x << " ";
            }
            cout << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}

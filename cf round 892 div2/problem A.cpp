#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 300005

int tc, n, a[MAX];

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
        sort(a + 1, a + n + 1);
        if(a[1] == a[n]){
            cout << -1 << "\n";
            continue;
        }
        int i = n;
        vector<int> v;
        while(a[i] == a[i-1]){
            v.push_back(a[i]);
            i--;
        }
        v.push_back(a[i]);
        cout << n - v.size() << " " << v.size() << "\n";
        i--;
        for(int j = i; j >= 1; j--){
            cout << a[j] << " ";
        }
        cout << "\n";
        for(auto x : v){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

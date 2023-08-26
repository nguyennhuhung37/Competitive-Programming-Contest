#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, a[MAX];
vector<int> b;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        b.clear();
        b.push_back(0);
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        a[n+1] = 0;
        if(a[1] != n){
            cout << "NO" << "\n";
            continue;
        }
        int i = n;
        while(i > 0){
            int tmp = a[i] - a[i+1];
            while(tmp--){
                b.push_back(i);
            }
            while(a[i-1] == a[i]){
                i--;
            }
            i--;
        }
        bool check = true;
        for(int i = 1; i <= n; i++){
            if(a[i] != b[i]){
                check = false;
                break;
            }
        }
        if(check) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}

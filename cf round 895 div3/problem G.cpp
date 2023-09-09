#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ld n, a[MAX], s[MAX], t[MAX];

ld calc(int l, int r){
    return t[r] / t[l-1] - (s[r] - s[l-1]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
         cin >> n;
         s[0] = 0; t[0] = 1;
         for(int i = 1; i <= n; i++){
            cin >> a[i];
            s[i] = s[i-1] + a[i];
            t[i] = t[i-1] * a[i];
         }
         int l = 1, r = 1;
         vector<int> save;
         for(int i = 1; i <= n; i++){
            if(a[i] >= 2) save.push_back(i);
         }
         if(save.size() > 60){
            cout << save[0] << " " << save.back() << "\n";
         }
         else{
            for(int i : save) for(int j : save) if(i < j)
            if(calc(i, j) > calc(l, r)){
                l = i; r = j;
            }
            cout << l << " " << r << "\n";
         }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define MAX 200005

int tc;
ll n, a[MAX];

int main(){
    cin >> tc;
    while(tc--)
    {
         cin >> n;
         ll sum = 0, cnt1 = 0;
         for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) cnt1++;
         }
         if(cnt1 * 2 + (n - cnt1) <= sum && n != 1) cout << "YES" << "\n";
         else cout << "NO" << "\n";
    }
    return 0;
}

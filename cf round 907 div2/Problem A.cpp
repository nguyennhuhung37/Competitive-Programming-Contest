#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005
#define ii pair<int, int>

int tc, n, a[MAX];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        string ans = "YES";
        for(int i = 2; pow(2, i-1) <= n; i++){
            for(int j = pow(2, i-1)+1; j < min((int)pow(2, i), n); j++){
                if(a[j] > a[j+1]){
                    ans = "NO";
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

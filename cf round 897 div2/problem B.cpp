#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n;
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> s;
        int a = 0, b = 0;//b = *2
        for(int i = 0; i * 2 < n; i++){
            if(s[i] != s[n-1-i]) a++;
            else if(i != n-i-1) b++;
        }
        for(int i = 0; i <= n; i++){
            if(n & 1){
                if(a <= i && i <= a + b*2 + 1){
                    cout << '1';
                }
                else cout << '0';
            }
            else{
                if(a <= i && i <= a + b*2 && (i-a) % 2 == 0){
                    cout << '1';
                }
                else cout << '0';
            }
        }
        cout << "\n";
    }
    return 0;
}

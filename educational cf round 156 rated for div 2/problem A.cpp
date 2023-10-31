#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 123456789
#define ii pair<int, int>

int tc;
ll n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        if(n < 7 || n == 9){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if(n % 3 != 0){
            cout << "1 2 " << n - 3 << "\n";
        }
        else{
            cout << "1 4 " << n - 5 << "\n";
        }
    }
    return 0;
}

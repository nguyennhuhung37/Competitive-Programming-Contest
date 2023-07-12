#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll tc;

int main(){
    cin >> tc;
    while(tc--)
    {
        ll n; cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        for(int i = 2; i <= n; i += 2){
            cout << i << " ";
        }
        cout << 1 << " ";
        int tmp = (n % 2 == 1) ? n : n-1;
        for(int i = tmp; i >= 3; i -= 2){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

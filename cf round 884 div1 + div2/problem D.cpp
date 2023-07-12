#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll tc;
ll n;

int main(){
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        ll x = 2;
        while(n % x == 0) x++;
        for(ll i = 0; i < n; i++){
            char tmp = i % x + 'a';
            cout << tmp;
        }
        cout << endl;
    }
    return 0;
}

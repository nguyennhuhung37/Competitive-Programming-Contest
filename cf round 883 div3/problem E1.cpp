#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 1000005

int t;
bool check[MAX];

int main(){
    for(ll i = 2; i <= 1000; i++){
        ll now = 1 + i + i * i;
        ll tmp = i * i * i;
        if(now > 1000000){
            break;
        }
        check[now] = true;
        while(now + tmp <= 1000000){
            now += tmp;
            check[now] = true;
            tmp *= i;
        }
    }
    cin >> t;
    while(t--)
    {
        int x; cin >> x;
        if(check[x]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

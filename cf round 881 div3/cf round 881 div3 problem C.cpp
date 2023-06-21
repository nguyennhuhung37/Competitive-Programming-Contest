#include<bits/stdc++.h>
using namespace std;

int t;
long long n;

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long res = 0;
        while(n){
            res += n;
            n /= 2;
        }
        cout << res << endl;
    }
    return 0;
}

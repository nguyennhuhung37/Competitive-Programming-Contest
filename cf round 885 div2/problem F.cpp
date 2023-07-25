#include<bits/stdc++.h>
using namespace std;
#define MAX (1 << 20)

int a[MAX];

int solve(int n)
{
    if(n == 1){
        if(a[0] == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
    bool check = true;
    for(int i = 0; i < n / 2; i++){
        if(a[i] != a[i + n/2]){
            check = false;
            break;
        }
    }
    if(check){
        return solve(n / 2);
    }
    for(int i = 0; i < n; i++){
        a[i] ^= a[(i + n/2) % n];
    }
    return n/2 + solve(n / 2);
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << solve(n);
    return 0;
}

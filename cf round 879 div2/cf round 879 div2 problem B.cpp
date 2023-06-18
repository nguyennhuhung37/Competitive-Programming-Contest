#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
using ll = long long;

int t, n;
string l, r;

bool check(string l, string r, int n){
    for(int i = 0; i < n; i++){
        if(l[i] != r[i]){
            return true;
        }
    }
    return false;
}

int solve(string l, string r, int n){
    if(!check(l, r, n)){
        return r[n] - l[n];
    }
    r[n] = 0;
    l[n] = 9;
    return 9 + solve(l, r, n - 1);
}

int main(){
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        while(l.size() != r.size()){
            l = "0" + l;
        }
        n = r.size() - 1;
        cout << solve(l, r, n) << endl;
    }
    return 0;
}

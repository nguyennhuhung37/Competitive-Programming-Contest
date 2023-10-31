#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    auto grundy = [] (int n){
        if(n % 4 == 0) return n-1;
        if(n % 4 == 3) return n+1;
        return n;
    };
    int sum = 0;
    for(auto x : a){
        sum ^= grundy(x);
    }
    cout << (sum == 0 ? "Bob" : "Alice");
    return 0;
}

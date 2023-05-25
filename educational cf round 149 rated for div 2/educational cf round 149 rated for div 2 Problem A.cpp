#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair< int, ii >
int t;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        int x, k; cin >> x >> k;
        if(x % k == 0) {
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl;
        }
        else {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
    return 0;
}

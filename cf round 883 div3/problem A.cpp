#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

int t, n;

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n;
        int cnt = 0;
        while(n--){
            int x, y; cin >> x >> y;
            if(x > y) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

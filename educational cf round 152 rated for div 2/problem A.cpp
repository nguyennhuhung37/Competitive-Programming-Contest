#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

int tc;
ll b, c, h;

int main(){
    cin >> tc;
    while(tc--)
    {
        cin >> b >> c >> h;
        cout << min(b*2 - 1, (c+h) * 2 + 1) << "\n";
    }
    return 0;
}

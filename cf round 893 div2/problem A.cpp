#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005
#define ii pair<int, int>

int tc;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        int a, b, c; cin >> a >> b >> c;
        if(a > b){
            cout << "First" << "\n";
            continue;
        }
        else if(a == b && c % 2 == 1){
            cout << "First" << "\n";
            continue;
        }
        else{
            cout << "Second" << "\n";
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

int t;

void solve()
{
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    for(int i = 0; i < 3; i++){
        if(s[i] == "XXX" || s[i] == "OOO" || s[i] == "+++"){
            cout << s[i][0] << endl;
            return;
        }
        if(s[0][i] == s[1][i] && s[1][i] == s[2][i]){
            if(s[0][i] != '.'){
                cout << s[0][i] << endl;
                return;
            }
        }
    }
    if(s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[0][0] != '.'){
        cout << s[0][0] << endl;
        return;
    }
    if(s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[0][2] != '.'){
        cout << s[0][2] << endl;
        return;
    }
    cout << "DRAW" << endl;
}

int main(){
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

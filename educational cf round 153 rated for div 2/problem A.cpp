#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005
#define ii pair<int, int>

int tc;
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> s;
        if(s == "()"){
            cout << "NO" << "\n";
            continue;
        }
        int n = s.size();
        string a, b;
        for(int i = 1; i <= 2*n; i++){
            if(i <= n){
                a += '(';
            }
            else{
                a += ')';
            }
            if(i % 2 == 1){
                b += '(';
            }
            else{
                b += ')';
            }
        }
        bool check = false;
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                check = true;
                break;
            }
        }
        cout << "YES\n";
        if(check) cout << b << "\n";
        else cout << a << "\n";
    }
    return 0;
}

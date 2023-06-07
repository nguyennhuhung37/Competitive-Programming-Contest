#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>

int t;

int main(){
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s, ans = ""; cin >> s;
        int i = 0;
        while(i < n){
            ans += s[i];
            for(int j = i + 1; j < n; j++){
                if(s[j] == s[i]){
                    i = j + 1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

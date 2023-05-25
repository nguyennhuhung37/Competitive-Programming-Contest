#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair< int, ii >
int t;

void solve()
{
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '?') continue;
        if(i == 0){
            int tmp = i + 1;
            while(s[tmp] == '?' && tmp < s.size()) tmp++;
            if(tmp == s.size()){
                for(int j = 0; j < s.size(); j++) cout << "1";
                return;
            }
            else{
                for(int j = i; j < tmp; j++){
                    s[j] = s[tmp];
                }
            }
        }
        else{
            s[i] = s[i-1];
        }
    }
    cout << s << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

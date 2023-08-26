#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc, n, k;
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        cin >> s;
        if(k % 2 == 0){
            sort(s.begin(), s.end());
            cout << s << "\n";
        }
        else{
            vector<char> tmp;
            for(int i = 0; i < n; i += 2 ){
                tmp.push_back(s[i]);
            }
            sort(tmp.begin(), tmp.end());
            for(int i = 0; i < n; i += 2){
                s[i] = tmp[i/2];
            }
            tmp.clear();
            for(int i = 1; i < n; i += 2){
                tmp.push_back(s[i]);
            }
            sort(tmp.begin(), tmp.end());
            for(int i = 1; i < n; i += 2){
                s[i] = tmp[i/2];
            }
            cout << s << "\n";
        }
     }
    return 0;
}

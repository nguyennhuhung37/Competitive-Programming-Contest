#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005
#define MOD 100000
#define ii pair<int, int>

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    map<string, bool> vis;
    int cnt = 5;
    string word;
    while(cin >> word){
        if(word == "Welcome" && !vis["Welcome"]){
            cnt--;
            vis["Welcome"] = true;
        }
        if(word == "Hue" && !vis["Hue"]){
            cnt--;
            vis["Hue"] = true;
        }
        if(word == "University" && !vis["University"]){
            cnt--;
            vis["University"] = true;
        }
        if(word == "of" && !vis["of"]){
            cnt--;
            vis["of"] = true;
        }
        if(word == "Sciences" && !vis["Sciences"]){
            cnt--;
            vis["Sciences"] = true;
        }
    }
    if(cnt == 0) cout << "Yes";
    else cout << "No";
    return 0;
}

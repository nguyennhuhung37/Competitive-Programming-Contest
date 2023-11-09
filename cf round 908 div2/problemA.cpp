#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define ii pair<int, int>
using ll = long long;

int tc, n;
string s;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> s;
        map<char, int> cnt;
        for(auto x : s) cnt[x]++;
        char res = '?';
        for(int i = 1; i <= n; i++){
            int a = 0, b = 0, x = 0, y = 0;
            for(int j = 0; j < n; j++){
                if(s[j] == 'A') a++;
                else b++;
                if(a == i){
                    x++;
                    a = 0; b = 0;
                    continue;
                }
                if(b == i){
                    y++;
                    a = 0; b = 0;
                }
            }
            if(a != 0) continue;
            if(s[n-1] == 'A' && x > y) res = 'A';
            if(s[n-1] == 'B' && x < y) res = 'B';
        }
        cout << res << "\n";
    }
    return 0;
}

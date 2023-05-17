#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
void solve()
{
    string s; cin >> s;
    int n = s.size();
    map<char, int> cnt;
    int dem = 0;
    for(int i = 0; i < s.size(); i++){
        char x = s[i];
        if(cnt[x] == 0){
            dem++;
        }
        cnt[x]++;
    }
    if(dem >= 2){
        if(n % 2 == 0){
            cout << "YES" << endl;
            return;
        }
        else{
            if(dem > 2){
                cout << "YES" << endl;
                return;
            }
            else if(dem == 2){
                int tmp = n / 2;
                if(cnt[s[tmp]] > 1){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

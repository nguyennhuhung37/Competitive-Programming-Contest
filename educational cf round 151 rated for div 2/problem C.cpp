#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

long long t;
string s, l, r;
int m;

void solve()
{
    bool ok;
    int tmp = 0;
    cin >> s >> m >> l >> r;
    for(int i = 0; i < m; i++){
        if(l[i] > r[i]){
            cout << "NO" << endl;
            return;
        }
        bool check[10];
        for(int i = 0; i < 10; i++) check[i] = false;
        int cnt = 0;
        while(cnt < r[i] - l[i] + 1 && tmp < s.size()){
            if(s[tmp] >= l[i] && s[tmp] <= r[i] && check[s[tmp] - '0'] == false){
                cnt++;
                check[s[tmp] - '0'] = true;
            }
            tmp++;
        }
        if(cnt < r[i] - l[i] + 1){
            cout << "YES" << endl;
            return;
        }

    }
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

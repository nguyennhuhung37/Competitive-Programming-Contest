#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 100005
#define MOD 1000000007
#define ii pair<int, int>

int n, m, k;
string s[MAX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> s[i];
    int ans = -1, l = 0, r = 100000;
    while(l <= r){
        int mid = (l+r) / 2;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(s[i][j] == 'x'){
                    cnt++;
                    int tmp = j + mid * 2 ;
                    while(j < m && s[i][j] != '#' && j < tmp){
                        j++;
                    }
                }
            }
        }
        if(cnt <= k){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc, n, k, q, l[MAX], r[MAX], id[MAX], cnt[MAX];
bool check[MAX];
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        for(int i = 0; i <= n; i++) {
            cnt[i] = 0;
            check[i] = false;
        }
        cin >> s;
        for(int i = 1; i <= k; i++) cin >> l[i];
        sort(l + 1, l + k + 1);
        for(int i = 1; i <= k; i++){
            cin >> r[i];
        }
        sort(r + 1, r + k + 1);
        for(int i = 1; i <= k; i++){
            for(int j = l[i]; j <= r[i]; j++){
                id[j] = r[i] + l[i] - j;
            }
        }

        cin >> q;
        while(q--){
            int x; cin >> x;
            int p = upper_bound(l + 1, l + k + 1, x) - l - 1;
            cnt[min(x, l[p] + r[p] - x)]++;
            cnt[max(x, l[p] + r[p] - x) + 1]--;
        }
        for(int i = 1; i <= n; i++){
            cnt[i] += cnt[i-1];
        }
        for(int i = 1; i <= n; i++){
            if(cnt[i] & 1 && !check[i]){
                char tmp = s[i-1];
                s[i-1] = s[id[i]-1];
                s[id[i]-1] = tmp;
                check[i] = true;
                check[id[i]] = true;
            }
        }
        cout << s << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
#define MAX 200005
#define ii pair<int, int>
using namespace std;
using ll = long long;

int t, n, q;
string s;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    cin >> n >> q >> s;
    if(n % 2 != 0){
        for(int i = 1; i <= q; i++) cout << "NO" << endl;
        return 0;
    }
    int first_0 = n+1, first_1 = n+2, last_0 = -3, last_1 = -2;
    for(int i = 1; i < n; i += 2){
        if(s[i] == '('){
            first_0 = i;
            break;
        }
    }
    for(int i = n-1; i >= 1; i -= 2){
        if(s[i] == '('){
            last_0 = i;
            break;
        }
    }
    for(int i = 0; i < n; i += 2){
        if(s[i] == ')'){
            first_1 = i;
            break;
        }
    }
    for(int i = n-2; i >= 0; i -= 2){
        if(s[i] == '('){
            last_1 = i;
            break;
        }
    }
    while(q--){
        int id; cin >> id;
        id--;
        if(s[id] == '('){
            s[id] = ')';
            if(id % 2 == 1){
                if(id == first_0){
                    first_0 = n+1;
                    for(int i = id + 2; i < n; i += 2){
                        if(s[i] == '('){
                            first_0 = i;
                            break;
                        }
                    }
                }
                if(id == last_0){
                    last_0 = -3;
                    for(int i = id - 2; i >= 1; i -= 2){
                        if(s[i] == '('){
                            last_0 = i;
                            break;
                        }
                    }
                }
            }
            else{
                first_1 = min(id, first_1);
                last_1 = max(id, last_1);
            }
        }
        else{
            s[id] = '(';
            if(id % 2 == 0){
                if(id == first_1){
                    first_1 = n+2;
                    for(int i = id + 2; i < n; i += 2){
                        if(s[i] == ')'){
                            first_1 = i;
                            break;
                        }
                    }
                }
                if(id == last_1){
                    last_1 = -2;
                    for(int i = id - 2; i >= 0; i -= 2){
                        if(s[i] == ')'){
                            last_1 = i;
                            break;
                        }
                    }
                }
            }
            else{
                first_0 = min(id, first_0);
                last_0 = max(id, last_0);
            }
        }
        if(first_0 < first_1 && last_0 < last_1){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}

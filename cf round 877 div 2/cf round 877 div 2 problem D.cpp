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
    int first_0 = n, first_1 = n, last_0 = n, last_1 = n;
    for(int i = 0; i < n; i++){
        if(first_0 != n && first_1 != n){
            break;
        }
        if(s[i] == '('){
            if(i > 0 && s[i] == s[i-1]){
                first_0 = i;
            }
        }
        else{
            if(i > 0 && s[i] == s[i-1]){
                first_1 = i;
            }
        }
    }
    for(int i = n - 1; i > 0; i--){
        if(last_0 != n && last_1 != n){
            break;
        }
        if(s[i] == '(' && s[i-1] == '(' && last_0 == n){
            last_0 = i;
        }
        if(s[i] == ')' && s[i-1] == ')'&& last_1 == n){
            last_1 = i;
        }
    }
    while(q--){
        int id; cin >> id;
        id--;
        if(s[id] == '('){
            s[id] = ')';
            if(s[id] == s[id-1]){
                if(first_1 == n){
                    first_1 = id;
                    last_1 = id;
                }
                else{
                    first_1 = min(first_1, id);
                    last_1 = max(last_1, id);
                }
            }
            if(s[id] == s[id+1]){
                if(first_1 == n){
                    first_1 = id+1;
                    last_1 = id+1;
                }
                else{
                    first_1 = min(first_1, id+1);
                    last_1 = max(last_1, id+1);
                }
            }
            if(id == first_0 || id == first_0 - 1){
                first_0 = n;
                for(int i = id + 2; i < n; i++){
                    if(s[i] == '(' && s[i-1] == '('){
                         first_0 = i;
                         break;
                    }
                }
            }
            if(first_0 == n) last_0 = n;
            else{
                if(id == last_0 || id == last_0 - 1){
                    for(int i = id - 1; i > 0; i--){
                        if(s[i] == '(' && s[i-1] == '('){
                             last_0 = i;
                             break;
                        }
                    }
                }
            }
        }
        else{
            s[id] = '(';
            if(s[id] == s[id-1]){
                if(first_0 == n){
                    first_0 = id;
                    last_0 = id;
                }
                else{
                    first_0 = min(first_0, id);
                    last_0 = max(last_0, id);
                }
            }
            if(s[id] == s[id+1]){
                if(first_0 == n){
                    first_0 = id+1;
                    last_0 = id+1;
                }
                else{
                    first_0 = min(first_0, id+1);
                    last_0 = max(last_0, id+1);
                }
            }
            if(id == first_1 || id == first_1 - 1){
                first_1 = n;
                for(int i = id + 2; i < n; i++){
                    if(s[i] == ')' && s[i-1] == ')'){
                         first_1 = i;
                         break;
                    }
                }
            }
            if(first_1 == n) last_1 = n;
            else{
                if(id == last_1 || id == last_1 - 1){
                    for(int i = id - 1; i > 0; i--){
                        if(s[i] == ')' && s[i-1] == ')'){
                             last_1 = i;
                             break;
                        }
                    }
                }
            }
        }
        if(s[0] == ')'){
            cout << "NO" << endl;
            continue;
        }
        if(first_0 == n && first_1 == n){
            cout << "YES" << endl;
        }
        else if(first_0 != n && first_1 != n && first_0 < first_1 && last_0 < last_1){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}

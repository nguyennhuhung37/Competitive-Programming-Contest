#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 505
#define ii pair<int, int>

int tc, n, m;
char s[MAX][MAX], color[MAX][MAX];
int r[MAX], c[MAX];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; i++) r[i] = 0;
        for(int j = 1; j <= m; j++) c[j] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> s[i][j];
                if(s[i][j] == 'L') {c[j]++; c[j+1]++;}
                if(s[i][j] == 'U') {r[i]++; c[i+1]++;}
                color[i][j] = '.';
            }
        }
        bool check = true;
        for(int i = 1; i <= n; i++){
            if(r[i] % 2 != 0){
                check = false;
                break;
            }
        }
        for(int j = 1; j <= m; j++){
            if(c[j] % 2 != 0){
                check = false;
                break;
            }
        }
        if(!check){
            cout << -1 << "\n";
            continue;
        }
        for(int i = 1; i <= n; i++) r[i] = 0;
        for(int j = 1; j <= m; j++) c[j] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s[i][j] == 'U'){
                    if(r[i] > 0){
                        color[i][j] = 'B';
                        color[i+1][j] = 'W';
                        r[i]--;
                        r[i+1]++;
                    }
                    else{
                        color[i][j] = 'W';
                        color[i+1][j] = 'B';
                        r[i]++;
                        r[i+1]--;
                    }
                }
            }
        }
        for(int j = 1; j <= m; j++){
            for(int i = 1; i <= n; i++){
                if(s[i][j] == 'L'){
                    if(c[j] > 0){
                        color[i][j] = 'B';
                        color[i][j+1] = 'W';
                        c[j]--;
                        c[j+1]++;
                    }
                    else{
                        color[i][j] = 'W';
                        color[i][j+1] = 'B';
                        c[j]++;
                        c[j+1]--;
                    }
                }
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout << color[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}

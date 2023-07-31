#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>

int tc, n, a[25];

int main(){
    cin >> tc;
    while(tc--)
    {
        vector<ii> save;
        int positive = 0, negative = 0;
        cin >> n;
        ii Max = {0,0}, Min = {0,21};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            if(a[i] > 0) positive++;
            if(a[i] < 0) negative++;
            Max = max(Max, {a[i], i});
            Min = min(Min, {a[i], i});
        }
        if(max(positive, negative) <= 12){
            if(abs(Max.first) >= abs(Min.first)){
                for(int i = 1; i <= n; i++){
                    if(a[i] < 0){
                        a[i] += Max.first;
                        save.push_back({i, Max.second});
                    }
                }
                for(int i = 2; i <= n; i++){
                    if(a[i-1] > a[i]){
                        a[i] += Max.first;
                        save.push_back({i, Max.second});
                        Max = max(Max, {a[i], i});
                    }
                }
            }
            else{
                for(int i = 1; i <= n; i++){
                    if(a[i] > 0){
                        a[i] += Min.first;
                        save.push_back({i, Min.second});
                    }
                }
                for(int i = n-1; i >= 1; i--){
                    if(a[i] > a[i+1]){
                        a[i] += Min.first;
                        save.push_back({i, Min.second});
                        Min = min(Min, {a[i], i});
                    }
                }
            }
        }
        else{
            if(positive > 12){
                for(int i = 1; i <= 5; i++){
                    a[Max.second] *= 2;
                    Max.first *= 2;
                    save.push_back({Max.second, Max.second});
                }
                for(int i = 1; i <= n; i++){
                    if(a[i] < 0){
                        a[i] += Max.first;
                        save.push_back({i, Max.second});
                    }
                }
                for(int i = 2; i <= n; i++){
                    if(a[i-1] > a[i]){
                        a[i] += Max.first;
                        save.push_back({i, Max.second});
                        Max = max(Max, {a[i], i});
                    }
                }
            }
            if(negative > 12){
                for(int i = 1; i <= 5; i++){
                    a[Min.second] *= 2;
                    Min.first *= 2;
                    save.push_back({Min.second, Min.second});
                }
                for(int i = 1; i <= n; i++){
                    if(a[i] > 0){
                        a[i] += Min.first;
                        save.push_back({i, Min.second});
                    }
                }
                for(int i = n-1; i >= 1; i--){
                    if(a[i] > a[i+1]){
                        a[i] += Min.first;
                        save.push_back({i, Min.second});
                        Min = min(Min, {a[i], i});
                    }
                }
            }
        }
        cout << save.size() << endl;
        for(auto x : save){
            cout << x.first << " " << x.second << endl;
        }
    }
    return 0;
}

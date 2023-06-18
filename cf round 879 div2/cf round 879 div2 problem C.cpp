#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
using ll = long long;

struct cnt{
    ll giong, khac;
};

int tc, n;
string s, t;
cnt type[3];

int main(){
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        cin >> s >> t;
        type[1].giong = 0; type[1].khac = 0; type[2].giong = 0; type[2].khac = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == t[i]){
                type[1].giong++;
            }
            else type[1].khac++;
            if(s[i] == t[n-1-i]) type[2].giong++;
            else type[2].khac++;
        }
        ll ans_1, ans_2;
        if(type[1].khac == 0) ans_1 = 0;
        else if(type[1].khac % 2 == 0) ans_1 = type[1].khac * 2;
        else ans_1 = type[1].khac * 2 - 1;
        if(type[2].khac == 0) ans_2 = 2;
        else if(type[2].khac % 2 == 0) ans_2 = 4 * (type[2].khac / 2 - 1) + 3;
        else ans_2 = 4 * (type[2].khac - 1) / 2 + 2;
        cout << min(ans_1, ans_2) << endl;
    }
    return 0;
}

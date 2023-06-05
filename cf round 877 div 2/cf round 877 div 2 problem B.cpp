#include<bits/stdc++.h>
#define MAX 200005
#define ii pair<int, int>
using namespace std;
using ll = long long;

int t, n, a[MAX];
long long index[MAX];

int main(){
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            index[a[i]] = i;
        }
        if(n == 2){
            cout << index[1] << " " << index[1] << endl;
            continue;
        }
        if(index[1] < index[2] && index[2] < index[n]){
            cout << index[1] + 1 << " " << index[n] << endl;
        }
        else if(index[n] < index[2] && index[2] < index[1]){
            cout << index[n] << " " << index[1] - 1 << endl;
        }
        else if(index[n] < index[1] && index[1] < index[2]){
            cout << index[n] << " " << index[1] << endl;
        }
        else if(index[2] < index[1] && index[1] < index[n]){
            cout << index[1] << " " << index[n] << endl;
        }
        else{
            cout << index[1] << " " << index[1] << endl;
        }
    }
    return 0;
}

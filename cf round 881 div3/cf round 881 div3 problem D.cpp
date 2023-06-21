#include<bits/stdc++.h>
using namespace std;
#define MAX 200005

int t, n, q;
vector<int> child[MAX];
int leaf[MAX];
bool visited[MAX];

void cnt_leaf(int s){
    visited[s] = true;
    if(child[s].size() == 1 && s != 1){
        leaf[s] = 1;
        return;
    }
    for(auto x : child[s]){
        if(!visited[x]){
            cnt_leaf(x);
            leaf[s] += leaf[x];
        }
    }
    return;
}

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++){
            child[i].clear();
            leaf[i] = 0;
            visited[i] = false;
        }
        for(int i = 1; i <= n - 1; i++){
            int x, y; cin >> x >> y;
            child[x].push_back(y);
            child[y].push_back(x);
        }
        cnt_leaf(1);
        cin >> q;
        while(q--){
            int x, y; cin >> x >> y;
            cout << (long long)leaf[x] * (long long)leaf[y] << endl;
        }
    }
    return 0;
}

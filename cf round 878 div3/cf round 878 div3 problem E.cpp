#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define pll pair<ll, ll>

int T;
string s1, s2;

void swaps(ll w, ll x, ll y, ll z){
    if(w == 1){
        if(y == 1){
            swap(s1[x], s1[z]);
        }
        else{
            swap(s1[x], s2[z]);
        }
    }
    else{
        if(y == 1){
            swap(s2[x], s1[z]);
        }
        else{
            swap(s2[x], s2[z]);
        }
    }
}

int main(){
    cin >> T;
    while(T--)
    {
        cin >> s1 >> s2;
        ll n = s1.size();
        set<ll> neq;
        priority_queue<pll, vector<pll>, greater<pll> > pq;
        for(int i = 0; i < n; i++){
            if(s1[i] != s2[i]){
                neq.insert(i);
            }
        }
        ll  time_now = 0;
        ll t, q; cin >> t >> q;
        while(q--){
            ll type; cin >> type;
            time_now++;
            if(type == 1){
                ll pos; cin >> pos;
                pos--;
                pq.push({time_now + t, pos});
                if(neq.count(pos)){
                    neq.erase(pos);
                }
            }
            else if(type == 2){
                ll w, x, y, z; cin >> w >> x >> y >> z;
                x--; z--;
                swaps(w, x, y, z);
                if(s1[x] == s2[x] && neq.count(x)){
                    neq.erase(x);
                }
                if(s1[z] == s2[z] && neq.count(z)){
                    neq.erase(z);
                }
                if(s1[x] != s2[x]) neq.insert(x);
                if(s1[z] != s2[z]) neq.insert(z);
            }
            else{
                while(!pq.empty()){
                    pll top = pq.top();
                    if(top.first <= time_now){
                        if(s1[top.second] != s2[top.second]){
                            neq.insert(top.second);
                        }
                        pq.pop();
                    }
                    else{
                        break;
                    }
                }
                if(neq.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }

    }
    return 0;
}

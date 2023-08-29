//code1

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define ii pair<int, int>

int tc;
ll n, a[MAX], q;
multiset<ll> s, dis;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        s.clear(); dis.clear();
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) s.insert(a[i]);
        for(auto it = s.begin(); it != s.end(); it++){
            auto next = it;
            next++;
            if(next == s.end()) break;
            dis.insert(*next - *it);
        }
        cin >> q;
        while(q--){
            ll i, x; cin >> i >> x;
            if(n == 1){
                cout << x << " ";
                a[i] = x;
                continue;
            }
            auto it = s.find(a[i]);
            auto next = it, prev = it;
            next++; prev--;
            if(it == s.begin()){
                ll tmp = *next - *it;
                auto t = dis.find(tmp);
                dis.erase(t);
            }
            else if(next == s.end()){
                ll tmp = *it - *prev;
                auto t = dis.find(tmp);
                dis.erase(t);
            }
            else{
                auto t = dis.find(*it - *prev);
                dis.erase(t);
                t = dis.find(*next - *it);
                dis.erase(t);
                dis.insert(*next - *prev);
            }
            s.erase(it);
            s.insert(x);
            it = s.find(x);
            next = it, prev = it;
            next++; prev--;
            if(it == s.begin()){
                dis.insert(*next - *it);
            }
            else if(next == s.end()){
                dis.insert(*it - *prev);
            }
            else{
                auto t = dis.find(*next - *prev);
                dis.erase(t);
                dis.insert(*next - *it);
                dis.insert(*it - *prev);
            }
            a[i] = x;
            auto element_max = s.end(), dis_max = dis.end();
            element_max--; dis_max--;
            cout << *element_max + *dis_max << " ";
        }
        cout << "\n";
    }
    return 0;
}

//code2

//#include<bits/stdc++.h>
//using namespace std;
//using ll = long long;
//#define MAX 300005
//#define ii pair<int, int>
//
//int tc;
//ll n, a[MAX], q;
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//    cin >> tc;
//    while(tc--)
//    {
//        multiset<ll> s;
//        priority_queue<ll> dis, dis_tmp;
//        cin >> n;
//        for(int i = 1; i <= n; i++) cin >> a[i];
//        for(int i = 1; i <= n; i++) s.insert(a[i]);
//        for(auto it = s.begin(); it != s.end(); it++){
//            auto next = it;
//            next++;
//            if(next == s.end()) break;
//            dis.push(*next - *it);
//        }
//        cin >> q;
//        while(q--){
//            ll i, x; cin >> i >> x;
//            if(n == 1){
//                cout << x << " ";
//                a[i] = x;
//                continue;
//            }
//            auto it = s.find(a[i]);
//            auto next = it, prev = it;
//            next++; prev--;
//            if(it == s.begin()){
//                dis_tmp.push(*next - *it);
//            }
//            else if(next == s.end()){
//                dis_tmp.push(*it - *prev);
//            }
//            else{
//                dis_tmp.push(*it - *prev);
//                dis_tmp.push(*next - *it);
//                dis.push(*next - *prev);
//            }
//            s.erase(it);
//            s.insert(x);
//            it = s.find(x);
//            next = it, prev = it;
//            next++; prev--;
//            if(it == s.begin()){
//                dis.push(*next - *it);
//            }
//            else if(next == s.end()){
//                dis.push(*it - *prev);
//            }
//            else{
//                dis_tmp.push(*next - *prev);
//                dis.push(*next - *it);
//                dis.push(*it - *prev);
//            }
//            while(!dis_tmp.empty() && dis.top() == dis_tmp.top()){
//                dis.pop();
//                dis_tmp.pop();
//            }
//            a[i] = x;
//            auto element_max = s.end();
//            element_max--;
//            cout << *element_max + dis.top() << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}

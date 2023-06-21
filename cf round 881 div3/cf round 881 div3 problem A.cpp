#include<bits/stdc++.h>
using namespace std;

int t, n, a[55];

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n;
        priority_queue<int> Max;
        priority_queue<int, vector<int>, greater<int> > Min;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            Max.push(x);
            Min.push(x);
        }
        int res = 0;
        for(int i = 1; i <= n / 2; i++){
            res += Max.top() - Min.top();
            Max.pop(); Min.pop();
        }
        cout << res << endl;
    }
    return 0;
}

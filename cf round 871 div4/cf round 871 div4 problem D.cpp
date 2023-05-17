#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ii pair<int, int>
#define iii pair<int, ii>
int t;
bool f(int n, int m)
{
    if(n == m) return true;
    if(n < m || n % 3 != 0) return false;
    int a = n / 3, b = n*2 / 3;
    if(f(a, m) || f(b, m)) return true;
    else return false;
}
void solve()
{
    int n, m; cin >> n >> m;
    if(f(n, m)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

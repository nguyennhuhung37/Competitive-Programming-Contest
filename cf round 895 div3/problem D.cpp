#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 300005
#define MOD 998244353
#define ii pair<int, int>

int tc;
ll n, x, y;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        cin >> n >> x >> y;
        ll d = gcd(x, y);
        ll tmp = x * y / d;
        ll a = n / x, b = n / y, c = n / tmp;
        a -= c; b -= c;
        cout << (2*n - a + 1) * a / 2 - b*(b+1) / 2 << "\n";
    }
    return 0;
}

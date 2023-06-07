#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll a[n]; for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		ll l = -1, r = 1e9 + 1;
		while(r - l > 1){
            ll m = (l + r) / 2;
            ll c = 1, tmp = 0;
            for(int i = 1; i < n; i++){
                if(a[i] - a[tmp] > m * 2){
                    tmp = i;
                    c++;
                }
            }
            (c <= 3) ? r = m : l = m;
        }
		cout << r << endl;
	}
	return 0;
}

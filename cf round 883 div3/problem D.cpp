#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

double t, n, d, h;
double a[MAX];

int main(){
    cin >> t;
    while(t--)
    {
        cin >> n >> d >> h;
        double s = d * h / 2, ans = s;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 2; i <= n; i++){
            double x = a[i] - a[i-1];
            if(x >= h){
                ans += s;
            }
            else{
                ans += s - s * (h-x) * (h-x) / h / h;
            }
        }
        cout << setprecision(9) << fixed << ans << endl;
    }
    return 0;
}

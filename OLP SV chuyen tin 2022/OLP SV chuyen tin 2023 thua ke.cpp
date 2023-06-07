#include<bits/stdc++.h>
using namespace std;
#define MAX 50005

int main(){
    int n; cin >> n;
    long long a[MAX], prefix[MAX];
    prefix[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }
    long long ans = LONG_MAX;
    for(int c = 3; c <= n-1; c++){
        long long ab = prefix[c-1], cd = prefix[n] - ab, tmp = 1;
        int l = 1, r = c-1;
        while(l < r){
            int mid = l + (r - l + 1) / 2;
            if(prefix[mid] <= ab / 2){
                l = mid;
            }
            else{
                r = mid - 1;
            }
        }
        tmp *= pow(prefix[l], 2) + pow(ab - prefix[l], 2);
        l = c, r = n;
        while(l < r){
            int mid = l + (r - l + 1) / 2;
            if(prefix[mid] - ab <= cd / 2){
                l = mid;
            }
            else{
                r = mid - 1;
            }
        }
        tmp *= pow(prefix[l] - ab, 2) + pow(prefix[n] - prefix[l], 2);
        ans = min(ans, tmp);
    }
    cout << ans;
    return 0;
}

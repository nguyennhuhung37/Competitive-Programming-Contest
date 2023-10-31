#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define MAX 300005
#define MOD 123456789
#define ii pair<int, int>

int tc;
pair<ld, ld> A, B, P, O;
ld OA, OB, OP, AB, PA, PB;

ld dis(pair<ld, ld> A, pair<ld, ld> B){
    return (sqrt((A.first - B.first) * (A.first - B.first) + (A.second - B.second) * (A.second - B.second)));
}

bool check(ld m){
    if(OA > m && OB > m) return false;
    if(PA > m && PB > m) return false;
    if(OA <= m && PA <= m) return true;
    if(OB <= m && PB <= m) return true;
    if(OA <= m && AB/2 <= m && PB <= m) return true;
    if(OB <= m && AB/2 <= m && PA <= m) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    O.first = 0; O.second = 0;
    while(tc--)
    {
        cin >> P.first >> P.second >> A.first >> A.second >> B.first >> B.second;
        OA = dis(O, A); OB = dis(O, B); OP = dis(O, P);
        AB = dis(A, B); PA = dis(P, A); PB = dis(P, B);
        ld ans, l = 0, r = 1000000;
        while((r - l) * 100000000 > 1){
            ld m = (l + r) / 2;
            if(check(m)){
                ans = m;
                r = m;
            }
            else{
                l = m;
            }
        }
        cout << setprecision(9) << fixed << ans << "\n";
    }
    return 0;
}

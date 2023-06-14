#include<bits/stdc++.h>
using namespace std;
int t;

int main(){
    cin >> t;
    while(t--)
    {
        int q; cin >> q;
        string s = "";
        bool check = false;
        int a = 0, b = 0;
        for(int i = 1; i <= q; i++){
            int x; cin >> x;
            if(i == 1){
                s += "1";
                a = x;
                b = x;
                continue;
            }
            if(!check){
                if(b > x){
                    if(a < x){
                        s += "0";
                        continue;
                    }
                    else{
                        s += "1";
                        check = true;
                        b = x;
                    }
                }
                else{
                    s += "1";
                    b = x;
                }
            }
            else{
                if(b > x){
                    s += "0";
                    continue;
                }
                else{
                    if(a < x){
                        s += "0";
                        continue;
                    }
                    else{
                        s += "1";
                        b = x;
                        continue;
                    }
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}

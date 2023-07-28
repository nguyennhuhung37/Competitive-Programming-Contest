#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 200005

int n, a[MAX], coin = 0;

int main(){
    int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		if(a[i-1] != 0){
			a[i-1]--;
		}
		else if(a[i] == 0 && a[i+1] != 0){
			a[i+1]--;
		}
		else{
			coin++;
		}
	}
	cout << coin;
	return 0;
}

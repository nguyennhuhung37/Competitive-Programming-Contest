#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int M=1e6+10;
int sz[M],A[M];
ll dp[M],ans[M];
int n;
vector<int>G[M];
void dfs(int x,int f){
	sz[x]=1,dp[x]=0;
	for(int y:G[x])if(y!=f){
		dfs(y,x);
		sz[x]+=sz[y];
		dp[x]+=dp[y]+1ll*(A[y]^A[x])*sz[y];
	}
}
void redfs(int x,int f){
	for(int y:G[x])if(y!=f){
		ans[y]=ans[x]+1ll*(A[y]^A[x])*(n-2*sz[y]);
		redfs(y,x);
	}
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;++i)
			scanf("%d",&A[i]),G[i].clear();
		for(int i=2;i<=n;++i){
			int a,b;
			scanf("%d%d",&a,&b);
			G[a].push_back(b);
			G[b].push_back(a);
		}
		dfs(1,0);
		ans[1]=dp[1];
		redfs(1,0);
		for(int i=1;i<=n;++i)
			printf("%lld ",ans[i]);
		puts("");

	}
}

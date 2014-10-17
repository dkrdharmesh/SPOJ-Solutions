#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#define inf 0x3f3f3f3f
using namespace std;


int dp[1001][22][80];
int volo[1001];
int voln[1001];
int weight[1001];
int totc;

int recurse (int n, int vo, int vn){
	//cout << vo << " " << vn << endl;
	if(vo <= 0 && vn <= 0)
		return 0;
	if(n >= totc)
		return 1000000000;
	if(vo < 0)
		vo = 0;
	if(vn < 0)
		vn = 0;
	if(dp[n][vo][vn] != -1)
		return dp[n][vo][vn];
	dp[n][vo][vn] = min(recurse(n+1,vo,vn), weight[n] + recurse(n+1, vo-volo[n], vn -voln[n]));
	return dp[n][vo][vn];
}


int main(){

	int t;
	scanf("%d",&t);
	while(t--){
		memset(dp, -1 , sizeof dp);
		// memset(volo,0, sizeof volo);
		// memset(voln, 0 , sizeof voln);
		// memset(weight,0,sizeof weight);
		int vn,vo,n;
		scanf("%d",&vo);
		scanf("%d",&vn);
		scanf("%d",&n);
		totc = n;
		for(int i = 0; i < n; i++){
		    scanf("%d%d%d",&volo[i],&voln[i],&weight[i]);
		}
		cout << recurse(0,vo,vn) << endl;
	}

	return 0;
}

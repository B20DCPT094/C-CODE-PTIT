#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	char a[101], b[101][101];
	int n=0;
	gets(a);
	char *token = strtok(a, " ");
	while (token!=NULL){
		strcpy(b[n++], token);
		token=strtok(NULL, " ");
	}
	int mark[n];
	for (int i=0; i<n; i++) mark[i]=1;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (strcmp(b[j],b[i])==0) mark[j]=0;
		}
	}
	for (int i=0; i<n; i++){
		if (mark[i]) printf("%s ", b[i]);
	}
	return 0;
}

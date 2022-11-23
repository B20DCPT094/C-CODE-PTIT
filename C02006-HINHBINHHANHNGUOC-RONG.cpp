#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

//#define ll long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	int n,m; scanf("%d %d", &n, &m);
	int k=0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m+k; j++){
			if (j<=k) printf("~");
			else if (j==k+1 || j==m+k || i==1 || i==n) printf("*");
			else printf(".");
		}
		printf("\n");
		++k;
	}
	return 0;
}

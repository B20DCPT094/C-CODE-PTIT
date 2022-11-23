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
	int n; scanf("%d", &n);
	int m=n-1;
	for (int i=1; i<=n+m; i++){
		for (int j=1; j<=n+m; j++){
			if (j<=m) printf("~");
			else if (j==m+1 || j==n+m || i==1 || i==n+m) printf("*");
			else printf(".");
		}
		printf("\n");
		--m;
	}
	return 0;
}

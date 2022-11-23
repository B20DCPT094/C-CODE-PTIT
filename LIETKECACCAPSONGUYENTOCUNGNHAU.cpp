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
inline int gcd(int a,int b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline int lcm(int a,int b){return a/gcd(a,b)*b;}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int n, m; scanf("%d %d", &n, &m);
	for (int i=n; i<m; i++){
		for (int j=i+1; j<=m; j++){
			if (gcd(i, j)==1) printf("(%d,%d)\n", i, j);
		}
	}
	return 0;
}

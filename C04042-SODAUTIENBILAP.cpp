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
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		int a[n];
		for (int i=0; i<n; i++) scanf("%d", &a[i]);
		int ok=0;
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (a[j]==a[i]){
					printf("%d", a[i]);
					ok=1; break;
				}
			}
			if (ok) break;
		}
		if (!ok) printf("NO");
		printf("\n");
	}
	return 0;
}

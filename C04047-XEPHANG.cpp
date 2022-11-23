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

void swapc (int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void sort (int a[][2], int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (a[i][0]>a[j][0]){
				swapc(&a[i][0],&a[j][0]);
				swapc(&a[i][1],&a[j][1]);
			}else if (a[i][0]==a[j][0] && a[i][1]>a[j][1]){
				swapc(&a[i][0],&a[j][0]);
				swapc(&a[i][1],&a[j][1]);
			}
		}
	}
}

int maxc (int a, int b){
	if (a>b) return a;
	return b;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int n; scanf("%d", &n);
	int a[n][2];
	for (int i=0; i<n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
	sort(a,n);
	ll ans=0;
	for (int i=0; i<n; i++){
		ans=maxc(ans,a[i][0]);
		ans+=a[i][1];
	}
	printf("%d", ans);
	return 0;
}

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

int check (int a[], int n){
	int l=0, r=n-1;
	while (l<=r){
		if (a[l]!=a[r]) return 0;
		++l;--r;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		int a[n];
		for (int i=0; i<n; i++) scanf("%d", &a[i]);
		if (check(a,n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

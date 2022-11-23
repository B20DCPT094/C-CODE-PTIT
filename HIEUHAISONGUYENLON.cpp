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
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void rev (int a[], int n){
	int l=0, r=n-1;
	while (l<r){
		swapc(&a[l],&a[r]);
		++l; --r;
	}
}

void sub (char a[], char b[]){
	int n1=strlen(a), n2=strlen(b);
	int x[n1], y[n1], z[n1];
	for (int i=0; i<n1; i++) x[i]=a[i]-'0';
	for (int i=0; i<n2; i++) y[i]=b[i]-'0';
	rev(x, n1); rev(y, n2);
	for (int i=n2; i<n1; i++) y[i]=0;
	int nho=0, n=0;
	for (int i=0; i<n1; i++){
		int tmp=x[i]-y[i]-nho;
		if (tmp<0){
			nho=1;
			z[n++]=10+tmp;
		}else{
			z[n++]=tmp;
			nho=0;
		}
	}
	int ok=0;
	for (int i=n-1; i>=0; i--){
		if (ok==0 && z[i]) ok=1;
		if (ok) printf("%d", z[i]);
	}
	if (!ok) printf("0");
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int t; scanf("%d", &t);
	while (t--){
		char a[1001], b[1001];
		scanf("%s %s", a, b);
		if (strlen(a)>strlen(b) || strlen(a)==strlen(b) && strcmp(a,b)>0) sub(a,b);
		else sub(b,a);
		printf("\n");
	}
	return 0;
}

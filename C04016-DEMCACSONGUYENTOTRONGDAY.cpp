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

int cnt[1000001];

int prime (int n){
	if (n < 2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int cmp (const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int t; scanf("%d", &t);
	for (int i=1; i<=t; i++){
		int n; scanf("%d", &n);
		int a[n];
		for (int i=0; i<n; i++){
			scanf("%d", &a[i]);
			if (prime(a[i])) cnt[a[i]]++;
		}
		qsort(a,n,sizeof(int),cmp);
		printf("Test %d:\n", i);
		for (int i=0; i<n; i++){
			if (cnt[a[i]]){
				printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
				cnt[a[i]]=0;
			}
		}
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;

int cmp (const void *a, const void *b){
	ll *x = (ll*)a;
	ll *y = (ll*)b;
	return *x-*y;
}

int solve (ll a[], int n){
	for (int i=n-1; i>=2; i--){
		int l=0, r=i-1;
		while (l<r){
			if (a[l]+a[r]==a[i]) return 1;
			else if (a[l]+a[r]<a[i]) ++l;
			else --r;
		}
	}
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		ll a[n];
		for (int i=0; i<n; i++){
			scanf("%lld", &a[i]);
			a[i]=a[i]*a[i];
		}
		qsort(a,n,sizeof(ll),cmp);
		if (solve(a,n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;

int prime (int n){
	if (n < 2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int p[100];

void init(){
	int i=0, cnt=0;
	while (cnt<100){
		if (prime(i)) p[cnt++]=i;
		++i;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
  	init();
	int t; scanf("%d", &t);
	int idx=0;
	while (t--){
		++idx;
		int n; scanf("%d", &n);
		int a[n][n];
		int cnt=0;
		int h1=0, h2=n-1, c1=0, c2=n-1;
		while (h1<=h2 && c1<=c2){
			for (int i=h1; i<=h2; i++){
				a[h1][i]=p[cnt];
				++cnt;
			}
			++h1;
			for (int i=h1; i<=h2; i++){
				a[i][c2]=p[cnt];
				++cnt;
			}
			--c2;
			if (h1<=h2){
				for (int i=c2; i>=c1; i--){
					a[h2][i]=p[cnt];
					++cnt;
				}
				--h2;
			}
			if (c1<=c2){
				for (int i=h2; i>=h1; i--){
					a[i][c1]=p[cnt];
					++cnt;
				}
				++c1;
			}
		}
		printf("Test %d:\n", idx);
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++) printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	return 0;
}
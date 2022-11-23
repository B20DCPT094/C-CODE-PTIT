#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int dt[10001], cnt;

void solve(char c[]){
	int n=strlen(c);
	for (int i=0; i<n; i++){
		if (isdigit(c[i])){
			int tmp=0;
			while (isdigit(c[i])){
				tmp=tmp*10+c[i]-'0';
				++i;
			}
			i+=3;
			int mu=0;
			while (isdigit(c[i])){
				mu=mu*10+c[i]-'0';
				++i;
			}
			dt[mu]+=tmp;
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	for (int i=1; i<=t; i++){
		char c1[10001], c2[10001];
		gets(c1); gets(c2);
		memset(dt,0,sizeof(dt));
		cnt=0;
		solve(c1), solve(c2);
		for (int i=0; i<=10000; i++) if (dt[i]) ++cnt;
		for (int i=10000; i>=0; i--){
			if (dt[i]){
				printf("%d*x^%d", dt[i], i);
				--cnt;
				if (cnt) printf(" + ");
			}
		}
		printf("\n");
	}
	return 0;
}
// 1
// 3*x^8 + 7*x^2 + 4*x^0
// 11*x^6 + 9*x^2 + 2*x^1 + 3*x^0

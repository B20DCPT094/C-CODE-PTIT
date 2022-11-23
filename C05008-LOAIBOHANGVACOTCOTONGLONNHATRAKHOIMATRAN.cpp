#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int t; scanf("%d", &t);
	int cnt=0;
	while (t--){
		++cnt;
		int n,m; scanf("%d %d", &n, &m);
		int a[n][m];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++) scanf("%d", &a[i][j]);
		}
		int res=-1e9, hang=0, cot=0;
		for (int i=0; i<n; i++){
			int sum=0;
			for (int j=0; j<m; j++) sum+=a[i][j];
			if (sum>res){
				res=sum;
				hang=i;
			}
		}
		res=-1e9;
		for (int i=0; i<m; i++){
			int sum=0;
			for (int j=0; j<n; j++){
				if (j!=hang) sum+=a[j][i];
			}
			if (sum>res){
				res=sum;
				cot=i;
			}
		}
		printf("Test %d:\n", cnt);
		for (int i=0; i<n; i++){
			if (i!=hang){
				for (int j=0; j<m; j++){
					if (j!=cot){
						printf("%d ", a[i][j]);
					}
				}
			}
			printf("\n");
		}
	}
	return 0;
}

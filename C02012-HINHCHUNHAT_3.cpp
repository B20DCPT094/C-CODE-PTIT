#include<stdio.h>
#include <math.h>

int main(){
	int n,m; scanf("%d %d", &n, &m);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			printf("%d", abs(i-j)+1);
		}
		printf("\n");
	}
	return 0;
}

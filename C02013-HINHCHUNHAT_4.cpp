#include<stdio.h>
#include <math.h>

int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	int max;
	if (m>n) max=m;
	else max=n;
	for (int i=1; i<=m; i++){
		for (int j=1; j<=n; j++){
			printf("%d", abs(max-(i+j-1))+1);
		}
		printf("\n");
	}
	return 0;
}

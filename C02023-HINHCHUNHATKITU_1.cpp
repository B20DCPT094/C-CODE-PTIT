#include <stdio.h>
#include <math.h>

int main(){
	int m,n,max1,max2; scanf("%d %d", &m, &n);
	if (m>n) max1=m;
	else max1=n;
	for (int i=1; i<=m; i++){
		char max2=max1+96;
		for (int j=1; j<=n; j++){
			if (i>j) printf("%c", max2--);
			else printf("%c", max2);
		}
		printf("\n");
	}
}

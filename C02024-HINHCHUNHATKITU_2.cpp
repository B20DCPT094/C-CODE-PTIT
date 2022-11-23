#include <stdio.h>
#include <math.h>

int main(){
	int m,n; scanf("%d %d", &m, &n);
	char c='A'-1;
	for (int i=1; i<=m; i++){
		for (int j=1; j<=n; j++){
			if (i+j<=n+1) printf("%c", i+j-1+c);
			else printf("%c", n+1-j+c);
		}
		printf("\n");
	}
	return 0;
}

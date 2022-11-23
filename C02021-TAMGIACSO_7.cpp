#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int x=i;
		int m=n-1;
		for(int j=1;j<=i; j++){
			printf("%d ",x);
			x+=m;
			m--;
			}
		printf("\n");
	}
}

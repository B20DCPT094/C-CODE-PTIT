#include<stdio.h>
int a[100][100];
int b[100][100];
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int n,m;
		scanf("%d%d",&n,&m);
		for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
		scanf("%d",&a[i][j]);
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			b[i][j]=a[j][i];
		}
	}
	printf("Test %d:\n",q);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int sum = 0;
			for (int k = 1; k <= m; k++) {
				sum += a[i][k] * b[k][j];
			}
			printf("%d ",sum);
		}
		printf("\n");
	}
	}
	return 0;
}

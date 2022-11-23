#include<stdio.h>
int a[100][100]={0};
int b[100][100];
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int n;
		scanf("%d",&n);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				a[i][j]=j;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			b[i][j]=a[j][i];
		}
	}
	printf("Test %d:\n",q);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int sum = 0;
			for (int k = 1; k <= n; k++) {
				sum += a[i][k] * b[k][j];
			}
			printf("%d ",sum);
		}
		printf("\n");
	}
	}
	return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[2 * n - 1][2 * n - 1];
	for(int i = n; i > 0; i--){
		for(int j = n - i; j <= n + i - 2; j++){
			a[n - i][j] = i;
			a[j][n - i] = i;
			a[n + i - 2][j] = i;
			a[j][n + i - 2] = i;
		}
		
	}
	for(int i = 0; i < 2 * n - 1; i++){
		for(int j = 0; j < 2 * n - 1; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	int idx=1;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) a[i][j]=0;
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			a[i][j]=idx;
			++idx;
		}
		idx=1;
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}

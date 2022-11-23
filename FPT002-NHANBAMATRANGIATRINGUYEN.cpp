#include <stdio.h>

int main(){
	int a[101][101], b[101][101], c[101][101];
	int m,n,p,q; scanf("%d %d %d %d", &m, &n, &p, &q);
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++) scanf("%d", &a[i][j]);
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<p; j++) scanf("%d", &b[i][j]);
	}
	for (int i=0; i<p; i++){
		for (int j=0; j<q; j++) scanf("%d", &c[i][j]);
	}
	int d[101][101];
	for (int i=0; i<m; i++){
		for (int j=0; j<p; j++){
			d[i][j]=0;
			for (int k=0; k<n; k++) d[i][j]+=a[i][k]*b[k][j];
		}
	}
	int e[101][101];
	for (int i=0; i<m; i++){
		for (int j=0; j<q; j++){
			e[i][j]=0;
			for (int k=0; k<p; k++) e[i][j]+=d[i][k]*c[k][j];
		}
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<q; j++) printf("%d ", e[i][j]);
		printf("\n");
	}
	return 0;
}

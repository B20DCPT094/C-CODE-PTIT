#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int k=n*m,dem = 0;
		int d=0;
		int x=n-1;
		int y=m-1;
		while(d<=n/2){
		for(int i=d;i<=y;i++) {
			if (dem<k) {
				printf("%d ",a[d][i]) ;
				dem++;
			}
		}
		for(int i=d+1;i<=x;i++) {
			if (dem<k) {
				printf("%d ",a[i][y]) ;
				dem++;
			}
		}
		for(int i=y-1;i>=d;i--)  {
			if (dem<k) {
				printf("%d ",a[x][i]) ;
				dem++;
			}
		}
		for(int i=x-1;i>d;i--)  {
			if (dem<k) {
				printf("%d ",a[i][d]) ;
				dem++;
			}
		}
		d++;x--;y--;
		}
		printf("\n");
	}
	return 0;
}

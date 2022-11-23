#include<stdio.h>
#include<math.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a=*b;
	*b=tmp;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int n,m;
		scanf("%d %d",&n,&m);
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				for(int i1=i;i1<n;i1++){
					for(int j1=j;j1<m;j1++){
						if(a[i][j]>a[i1][j1]){
							swap(&a[i][j],&a[i1][j1]);
						}
					}
				}
			}
		}
		printf("Test %d:\n",q);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

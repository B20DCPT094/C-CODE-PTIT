#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		int x=i;
		for(int j=1;j<=n;j++){
			if(x<n){
				printf("%c",x+63);
				x++;
			}
			else if(x>=n) printf("%c",n+63);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=m;i>=1;i--){
		int x=i;
		for(int j=1;j<=n;j++){
			if(x<n){
				printf("%c",x+64);
				x++;
			}
			else if(x>=n) printf("%c",n+64);
		}
		printf("\n");
	}
	return 0;
}

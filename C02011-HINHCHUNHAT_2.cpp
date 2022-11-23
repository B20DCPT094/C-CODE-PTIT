#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		printf("%d",i);
		int x=i,y=n,z=i;
		for(int j=2;j<=n;j++){
			if(x<n){
				x++;
				printf("%d",x);
			}
			else{
				if(i>n){
					z--;
					printf("%d",z);
				}
				else{
					y--;
				printf("%d",y);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

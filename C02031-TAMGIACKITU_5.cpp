#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x=1;
	for(int i=n;i>=1;i--){
		for(int j=i;j<=n+i-x;j++){
			printf("%c",j+63);
		}
		x++;
		printf("\n");
	}
	return 0;
}

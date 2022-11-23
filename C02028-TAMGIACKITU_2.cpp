#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x=i;
		for(int j=1;j<=(n-i+1);j++){
			printf("%c",2*x-1+64);
			x++;
		}
		printf("\n");
	}
	return 0;
}

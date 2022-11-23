#include<stdio.h>
#include<math.h>
int main(){
	int n,k=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int x=k+i;
		for(int j=1;j<=i; j++){
			if(i%2!=0){
				printf("%d ",x++);
				k=x+i;
			}
			else{
				printf("%d ",k--);
			}
		}
		printf("\n");
	}
}

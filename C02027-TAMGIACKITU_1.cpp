#include<stdio.h>
#include<math.h>
int main(){
	int n,k=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int x=k+i;
		for(int j=1;j<=i; j++){
			if(i%2!=0){
				printf("%c ",x+++96);
				k=x+i;
			}
			else{
				printf("%c ",k--+96);
			}
		}
		printf("\n");
	}
}

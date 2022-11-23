#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int x=i-1;
		for(int j=1;j<=n-1+i; j++){
			if(j<=n-i) printf("~");
			else{
					if(j<=n) printf("%d",2*(j-(n-i))-1);
				else {
					printf("%d",2*x-1);
					x--;
				}
			}
		}
		printf("\n");
	}
}

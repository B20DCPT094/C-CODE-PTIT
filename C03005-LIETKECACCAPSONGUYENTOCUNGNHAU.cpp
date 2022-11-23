#include <stdio.h>

int gcd (int a, int b){
	if (b==0) return a;
	else{
		while (b){
			int r=a%b;
			a=b;
			b=r;
		}
		return a;
	}
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	for (int i=a; i<b; i++){
		for (int j=i+1; j<=b; j++){
			if (gcd(i,j)==1){
				printf("(");
				printf("%d", i);
				printf(",");
				printf("%d", j);
				printf(")");
				printf("\n");
			}
		}
	}
	return 0;
}

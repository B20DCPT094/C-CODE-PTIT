#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum=0;
	while (n){
		int d=n%10;
		sum+=d;
		n/=10;
	}
	printf("%d", sum);
	return 0;
}

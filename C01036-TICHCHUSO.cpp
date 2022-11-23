#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int t=1;
	while (n){
		int d=n%10;
		t*=d;
		n/=10;
	}
	printf("%d", t);
	return 0;
}

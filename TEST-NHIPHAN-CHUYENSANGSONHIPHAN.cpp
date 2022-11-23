#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int i;
	int a[10000];
	if (n==0) printf("0");
	else{
		for (i=0; n>0; i++){
			a[i]=n%2;
			n/=2;
		}
		for (i=i-1; i>=0; i--) printf("%d", a[i]);
	}
	return 0;
}

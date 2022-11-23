#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int cnt=0;
	while (n){
		++cnt;
		n/=10;
	}
	printf("%d", cnt);
	return 0;
}

#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int min=a;
	if (a>b) min=b;
	if (b>c) min=c;
	printf("%d", min);
	return 0;
}

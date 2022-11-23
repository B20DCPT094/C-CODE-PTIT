#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	int sum=0;
	for (int i=a; i<=b; i++){
		sum+=i;
	}
	printf("%d", sum);
	return 0;
}

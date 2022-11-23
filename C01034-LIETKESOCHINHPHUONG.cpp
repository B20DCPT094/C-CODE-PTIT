#include <stdio.h>
#include <math.h>

int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	int cnt=0;
	int c1=sqrt(m);
	int c2=sqrt(n);
	if (c1*c1!=m) ++c1;
	for (int i=c1; i<=c2; i++){
		++cnt;
	}
	printf("%d\n", cnt);
	for (int i=c1; i<=c2; i++){
		printf("%d\n", i*i);
	}
	return 0;
}

#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int tong=a+b;
	int hieu=a-b;
	long long tich=1ll*a*b;
	int chia=a/b;
	double thuong=(float)a/b;
	int mod=a%b;
	printf("%d\n", tong);
	printf("%d\n", hieu);
	printf("%lld\n", tich);
	printf("%d\n", chia);
	printf("%d\n", mod);
	printf("%.2f\n", thuong);
	return 0;
}

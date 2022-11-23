#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int tong, hieu, tich, mod;
	double thuong;
	if(b!=0){
		tong=a+b;
		hieu=a-b;
		tich=a*b;
		thuong=1.0*a/b;
		mod=a%b;
		printf("%d %d %d %.2f %d", tong, hieu, tich, thuong, mod);
	}else{
		printf("0");
	}
	return 0;
}

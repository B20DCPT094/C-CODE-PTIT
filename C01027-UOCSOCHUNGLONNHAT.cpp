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
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a,b));
	}
	return 0;
}

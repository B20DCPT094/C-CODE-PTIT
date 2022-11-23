#include <stdio.h>

/*int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		printf("%.15f", 1.0/n);
		printf("\n");
	}
	return 0;
}*/

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int a; scanf("%d", &a);
		double b=1.0/a;
		printf("%.15f\n", b);
	}
	return 0;
}

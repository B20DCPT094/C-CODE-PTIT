#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		printf("%lld", 1ll * n * n);
		printf("\n");
	}
	return 0;
}

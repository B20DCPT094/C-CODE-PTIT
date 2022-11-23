#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int c=sqrt(n);
		if (c*c==n) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

#include <stdio.h>

int gcd (int a, int b){
	int tmp=a*b;
	while (a*b){
		if (a>b) a%=b;
		else b%=a;
	}
	return tmp/(a+b);
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		int a[n], b[n+1];
		for (int i=0; i<n; i++) scanf("%d", &a[i]);
		int idx=0;
		int g=1;
		for (int i=0; i<n; i++){
			b[idx++]=gcd(g,a[i]);
			g=a[i];
		}
		b[n]=a[n-1];
		for (int i=0; i<=idx; i++) printf("%d ", b[i]);
		printf("\n");
	}
	return 0;
}

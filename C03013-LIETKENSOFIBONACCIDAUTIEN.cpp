#include <stdio.h>

typedef long long ll;

ll f[100];

void init(){
	f[0]=0;
	f[1]=1;
	for (int i=2; i<=93; i++){
		f[i]=f[i-1]+f[i-2];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	init();
	for (int i=0; i<n; i++){
		printf("%d ", f[i]);
	}
	return 0;
}

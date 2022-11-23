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
	int ok=0;
	for (int i=0; i<=93; i++){
		if (f[i]==n){
			ok=1;
			break;
		}
	}
	if (ok==0) printf("0");
	else printf("1");
	return 0;
}

#include <stdio.h>
#include <math.h>

int p[1000001];

void init(){
	for (int i=0; i<=1000000; i++){
		p[i]=1;
	}
	p[0]=0;
	p[1]=0;
	for (int i=2; i<=sqrt(1000000); i++){
		if (p[i]){
			for (int j=i*i; j<=1000000; j+=i){
				p[j]=0;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	init();
	for (int i=2; i<n; i++){
		if (p[i]) printf("%d\n", i);
	}
	return 0;
}

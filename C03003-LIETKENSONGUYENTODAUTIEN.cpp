#include <stdio.h>
#include <math.h>

/*int p[1000001];

void sang(){
	for (int i=0; i<=1000000; i++){
		p[i]=1;
	}
	p[0]=0;
	p[1]=0;
	for (int i=2; i<=sqrt(1000000); i++){
		if (p[i]){
			for (int j=i*i; j<=1000000; j+=i){
				p[j]=1;
			}
		}
	}
}*/

int nt (int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
//	sang();
	int i=0, cnt=0;
	while (cnt<n){
		if (nt(i)){
			printf("%d\n", i);
			++cnt;
		}
		++i;
	}
	return 0;
}

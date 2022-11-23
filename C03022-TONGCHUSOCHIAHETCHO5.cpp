#include <stdio.h>
#include <math.h>

int nt (int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int sum (int n){
	int res=0;
	while (n){
		int d=n%10;
		res+=d;
		n/=10;
	}
	return res;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt=0;
	for (int i=2; i<n; i++){
		if (nt(i) && sum(i)%5==0){
			printf("%d ", i);
			++cnt;
		}
	}
	printf("\n");
	printf("%d", cnt);
	return 0;
}

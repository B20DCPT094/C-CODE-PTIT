#include <stdio.h>
#include <math.h>

int nt (int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int check (int n){
	while (n){
		int d=n%10;
		n/=10;
		if (nt(d)) continue;
		else return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a,b;
		scanf("%d %d", &a, &b);
		int cnt=0;
		for (int i=a; i<=b; i++){
			if (nt(i) && check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

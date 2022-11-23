#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (int n){
	if(n<2) return 0;
	for (int i=2; i<=sqrt(n); ++i){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll L,R;
		scanf("%lld %lld", &L, &R);
		int c1=sqrt(L);
		int c2=sqrt(R);
		int cnt=0;
		if(c1*c1!=L) ++c1;
		for (int i=c1; i<=c2; ++i){
			if(check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

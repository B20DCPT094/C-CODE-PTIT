#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt (ll n){
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		ll n;
		scanf("%lld", &n);
		ll max;
		for (int i=2; i<=sqrt(n); i++){
			while (n%i==0 && nt(i)){
				max=i;
				n/=i;
			}
		}
		if (n!=1) max=n;
		printf("%lld\n", max);
	}
	return 0;
}

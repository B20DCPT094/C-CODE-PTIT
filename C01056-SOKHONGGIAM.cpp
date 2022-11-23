#include <stdio.h>

typedef long long ll;

int check (ll n){
	while (n){
		int d1=n%10;
		n/=10;
		int d2=n%10;
		n/=10;
		if (d1<d2) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		ll n;
		scanf("%lld", &n);
		if (check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

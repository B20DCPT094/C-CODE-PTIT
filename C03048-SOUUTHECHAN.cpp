#include <stdio.h>

typedef long long ll;

int check (ll n){
	if (n%2!=0) return 0;
	int c=0, l=0;
	while(n){
		int d=n%10;
		if(d%2==0) ++c;
		else ++l;
		n/=10;
	}
	if (c<=l) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

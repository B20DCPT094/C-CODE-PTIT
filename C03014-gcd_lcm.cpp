#include <stdio.h>

typedef long long ll;

ll gcd (ll a, ll b){
	if (b==0) return a;
	return gcd(b,a%b);
}

ll gcd2 (ll a, ll b){
	if (b==0) return a;
	while (b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

ll lcm (ll a, ll b){
	return a/gcd(a,b)*b;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a,b;
		scanf("%d %d", &a, &b);
		printf("%lld %lld\n", lcm(a,b), gcd2(a,b));
	}
	return 0;
}

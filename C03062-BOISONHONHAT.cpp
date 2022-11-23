#include <stdio.h>
#include <math.h>

typedef long long ll;

ll gcd (ll a, ll b){
	if (b==0) return a;
	return gcd(b,a%b);
}

ll lcm (ll a, ll b){
	return a/gcd(a,b)*b;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		ll n,m;
		scanf("%lld %lld", &n, &m);
		ll res=n;
		for (int i=n+1; i<=m; i++){
			res=lcm(res,i);
		}
		printf("%lld\n", res);
	}
	return 0;
}

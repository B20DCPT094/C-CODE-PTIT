#include <stdio.h>
#include <math.h>

typedef long long ll;

int check1 (ll n){
	ll m=n;
	ll tmp=0;
	while (m>0){
		tmp=tmp*10+m%10;
		m/=10;
	}
	if (tmp==n) return 1;
	return 0;
}

int check2 (ll n){
	while (n!=0){
		int d=n%10;
		n/=10;
		if (d%2!=0) continue;
		else return 0;
	}
	return 1;
}

int check3 (ll n){
	int sum=0;
	while (n){
		sum+=n%10;
		n/=10;
	}
	if (sum%2==0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		ll n;
		scanf("%lld", &n);
		if (check1(n) && check2(n) && check3(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

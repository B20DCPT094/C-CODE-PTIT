#include <stdio.h>

typedef long long ll;

int tn (ll n){
	ll m=n;
	ll tmp=0;
	while (m>0){
		tmp=tmp*10+m%10;
		m/=10;
	}
	if (tmp==n) return 1;
	else return 0;
}

int check1 (ll n){
	int cnt=0;
	while (n){
		int d=n%10;
		if (d==6) ++cnt;
		n/=10;
	}
	if (cnt>0) return 1;
	else return 0;
}

int check2 (ll n){
	int sum=0;
	while (n){
		sum+=n%10;
		n/=10;
	}
	if (sum%10==8) return 1;
	else return 0;
}

int main(){
	ll a,b;
	scanf("%lld %lld", &a, &b);
	if (a>b){
		ll tmp=a;
		a=b;
		b=tmp;
	}
	for (int i=a; i<=b; i++){
		if (tn(i) && check1(i) && check2(i)) printf("%lld ", i);
	}
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define ll long long

struct ps{
	ll tu, mau;
};

typedef struct ps ps;

ll gcd (ll a, ll b){
	if (b==0) return a;
	return gcd(b,a%b);
}

ll lcm (ll a, ll b){
	return a/gcd(a,b)*b;
}

ps rutgon (ps a){
	ll g = gcd(a.tu,a.mau);
	a.tu/=g;
	a.mau/=g;
	return a;
}

void solve (ps a, ps b){
	a = rutgon(a);
	b = rutgon(b);
	ll l = lcm(a.mau,b.mau);
	a.tu=l/a.mau*a.tu;
	a.mau=l;
	b.tu=l/b.mau*b.tu;
	b.mau=l;
	printf("%d/%d %d/%d\n", a.tu, a.mau, b.tu, b.mau);
	ps tong;
	tong.tu=a.tu+b.tu;
	tong.mau=a.mau;
	tong = rutgon(tong);
	printf("%d/%d\n", tong.tu, tong.mau);
	ps thuong;
	thuong.tu=a.tu*b.mau;
	thuong.mau=a.mau*b.tu;
	thuong = rutgon(thuong);
	printf("%d/%d\n", thuong.tu, thuong.mau);
}

int main(){
	int t; scanf("%d", &t);
	for (int i=1; i<=t; i++){
		ps a,b;
		scanf("%lld %lld %lld %lld", &a.tu, &a.mau, &b.tu, &b.mau);
		printf("Case #%d:\n", i);
		solve(a,b);
	}
	return 0;
}

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

int st (int n){
	int x, tong=0;
	for (int i=1; i<n; i++){
		if (n%i==0){
			tong+=i;
		}
	}
	if (tong==n) return 1;
	else return 0;
}

int main(){
	int a,b,i;
	scanf("%d %d", &a, &b);
	if (a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for (i=a; i<=b; i++){
		if (st(i)) printf("%d ", i);
	}
	return 0;
}

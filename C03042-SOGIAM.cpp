#include <stdio.h>

#define ll long long

int check(ll n){
	int y=n%10;
	n/=10;
	while(n){
		int x=n%10;
		if(x<=y) return 0;
		y=x;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		ll a,b; scanf("%lld %lld", &a, &b);
		int cnt=0;
		for (int i=a; i<=b; i++){
			if (check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

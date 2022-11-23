#include <stdio.h>
#include <math.h>

typedef long long ll;

ll nt (ll n){
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return n>1;
}

int hh (int i){
	return (int)pow(2,i-1)*(int)(pow(2,i)-1);
}

int main(){
	ll n;
	scanf("%lld", &n);
	for (int i=2; hh(i)<n; i++){
		int t=(int)(pow(2,i)-1);
		if (nt(t)) printf("%d ", hh(i));
	}
	return 0;
}

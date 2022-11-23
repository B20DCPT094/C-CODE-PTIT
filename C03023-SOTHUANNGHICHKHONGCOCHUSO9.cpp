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

int tn (int n){
	int m=n;
	int tmp=0;
	while (m>0){
		tmp=tmp*10+m%10;
		m/=10;
	}
	if (tmp==n) return 1;
	return 0;
}

int check (int n){
	while (n){
		int d=n%10;
		if (d==9) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt=0;
	for (int i=2; i<10; i++){
		if (check(i)){
			printf("%d ", i);
			++cnt;
		}
	}
	for (int i=10; i<n; i++){
		if (tn(i) && check(i)){
			printf("%d ", i);
			++cnt;
		}
	}
	printf("\n");
	printf("%d", cnt);
	return 0;
}

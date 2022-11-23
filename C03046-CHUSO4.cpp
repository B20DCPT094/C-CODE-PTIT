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
	int sum=0;
	while (n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int check2 (int n){
	while (n){
		int d=n%10;
		if (d==4) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		for (int i=pow(10,n-1); i<pow(10,n); i++){
			if (tn(i) && check(i)%10==0 && check2(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

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

int solve (int n, int p){
	int ans=0;
	for (int i=p; i<=n; i*=p){
		ans+=n/i;
	}
	return ans;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n,p;
		scanf("%d %d", &n, &p);
		printf("%d\n", solve(n,p));
	}
	return 0;
}

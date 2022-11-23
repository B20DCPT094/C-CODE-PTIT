#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int nt (ll n){
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		ll n; scanf("%lld", &n);
		int a[10001]={0};
		for (int i=2; i<=sqrt(n); i++){
			if (n%i==0 && nt(i)){
				while (n%i==0){
					n/=i;
				}
				a[i]=i;
			}
		}
		ll ans=1;
		for (int i=0; i<10001; i++){
			if (a[i]) ans*=a[i];
		}
		if (n!=1) ans*=n;
		printf("%lld\n", ans);
	}
	return 0;
}

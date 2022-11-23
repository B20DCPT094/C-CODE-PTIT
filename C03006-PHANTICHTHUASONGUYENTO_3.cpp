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
	for (int i=1; i<=t; i++){
		ll n; scanf("%lld", &n);
		printf("Test %d: ", i);
		for (int j=2; j<=sqrt(n); j++){
			if (n%j==0 && nt(j)){
				int cnt=0;
				while (n%j==0){
					++cnt;
					n/=j;
				}
				printf("%d(%d) ", j, cnt);
			}
		}
		if (n!=1) printf("%d(1)", n);
		printf("\n");
	}
	return 0;
}

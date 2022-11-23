#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

//#define ll long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int nt (ll n){
	for (int i=2; i<sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		ll n; scanf("%lld", &n);
		printf("%d = ", n);
		for (int i=2; i<=sqrt(n); i++){
			if (n%i==0 && nt(i)){
				int cnt=0;
				while (n%i==0){
					++cnt;
					n/=i;
				}
				printf("%d^%d", i, cnt);
				if (n!=1) printf(" * ");
			}
		}
		if (n!=1) printf("%d^1", n);
		printf("\n");
	}
	return 0;
}

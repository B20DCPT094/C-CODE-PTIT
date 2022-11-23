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

int check (ll n){
	int y=n%10;
	n/=10;
	while (n){
		int x=n%10;
		if (x>y) return 0;
		y=x;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		ll a=pow(10,n-1), b=pow(10,n);
		for (ll i=a; i<b; i++){
			if (check(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

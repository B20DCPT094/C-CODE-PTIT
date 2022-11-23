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

ll x,y;

void swap (ll *a, ll *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int solve(){
	if (x>y) swap(&x,&y);
	if (y-x==0 || y-x==1 || y-x==2) return y-x;
	int d=y-x-2, step=2, i=1;
	while (d){
		++i;
		d-=i;
		++step;
		if (d<=0) return step;
		d-=i; 
		step++;
	}
	return step;
}

int main(){
	while (scanf("%lld %lld", &x, &y)==2){
		printf("%d\n", solve());
	}
}
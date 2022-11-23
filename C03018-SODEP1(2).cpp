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
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return n>1;
}

int fibo (int n){
	if (n<4) return n;
	return fibo(n-1)+fibo(n-2);
}

int main(){
	int a,b; scanf("%d %d", &a, &b);
	if (a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for (int i=a; i<=b; i++){
		int sum=0;
		int tmp=i;
		while (tmp){
			sum+=tmp%10;
			tmp/=10;
		}
		for (int j=1; j<=sum; j++){
			if (sum==fibo(j) && nt(i)) printf("%d ", i);
		}
	}
	return 0;
}

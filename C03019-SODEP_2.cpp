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

int tn(ll n){
	ll tmp=0, m=n;
	while (m){
		tmp=tmp*10+m%10;
		m/=10;
	}
	if (tmp!=n) return 0;
	return 1;
}

int check (ll n){
	int s=0;
	while (n){
		s+=n%10;
		n/=10;
	}
	if (s%10!=0) return 0;
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		int n; scanf("%d", &n);
		int cnt=0;
		ll a=pow(10,n-1), b=pow(10,n);
		for (ll i=a; i<b; i++){
			if (tn(i) && check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

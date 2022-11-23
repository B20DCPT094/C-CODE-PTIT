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

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) scanf("%d", &a[i]);
	int cnt[101]={0};
	int res=0;
	for (int i=0; i<n; i++) cnt[a[i]]++;
	for (int i=0; i<n; i++){
		if (cnt[a[i]]==1) ++res;
	}
	printf("%d\n", res);
	for (int i=0; i<n; i++){
		if (cnt[a[i]]==1) printf("%d ", a[i]);
	}
	return 0;
}

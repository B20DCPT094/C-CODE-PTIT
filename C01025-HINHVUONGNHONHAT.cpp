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

int max(int a,int c,int e,int g){
	int max =a;
	if(max<c) max=c;
	if(max<e) max=e;
	if(max<g) max=g;
	return max;
}
int min(int a,int c,int e,int g){
	int min = a;
	if(min>c) min=c;
	if(min>e) min=e;
	if(min>g) min=g;
	return min;
}
int main(){
	int a,b,c,d,e,f,g,h;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
	int n = max(a,c,e,g)-min(a,c,e,g);
	int m = max(b,d,f,h)-min(b,d,f,h);
	if(n>=m) printf("%d",n*n);
	else printf("%d",m*m);
	return 0;
}

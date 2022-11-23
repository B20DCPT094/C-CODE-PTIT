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
	char c[10005];
	gets(c);
	int c1=0, c2=0, c3=0;
	for (int i=0; i<strlen(c); i++){
		if (isalpha(c[i])) ++c1;
		else if (isdigit(c[i])) ++c2;
		else ++c3;
	}
	printf("%d %d %d", c1, c2, c3);
	return 0;
}

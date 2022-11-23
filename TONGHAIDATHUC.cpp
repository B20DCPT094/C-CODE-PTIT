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

int dt[10001], cnt;

void solve (char c[]){
	int n=strlen(c);
	for (int i=0; i<n; i++){
		if (isdigit(c[i])){
			int tmp=0;
			while (isdigit(c[i])){
				tmp = tmp*10 + c[i] - '0';
				++i;
			}
			i+=3;
			int mu=0;
			while (isdigit(c[i])){
				mu = mu*10 + c[i]-'0';
				++i;
			}
			dt[mu] += tmp;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int t; scanf("%d", &t);
	getchar();
	while (t--){
		char c1[10001], c2[10001];
		gets(c1); gets(c2);
		memset(dt, 0, sizeof(dt));
		cnt=0;
		solve(c1); solve(c2);
		for (int i=0; i<=10000; i++){
			if (dt[i]) ++cnt;
		}
		for (int i=10000; i>=0; i--){
			if (dt[i]){
				printf("%d*x^%d", dt[i], i);
				--cnt;
				if (cnt) printf(" + ");
			}
		}
		printf("\n");
	}
	return 0;
}

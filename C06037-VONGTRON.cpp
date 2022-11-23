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

int check (char tmp[], char sz, char search){
	for (int i=0; i<sz-1; i++){
		if (search==tmp[i]) return 0;
	}
	return 1;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
  	char a[55];
  	gets(a);
  	int cnt[55]={0};
  	int res=0;
  	for (int i=0; i<strlen(a); i++){
  		char tmp[55];
  		cnt[i]=1;
  		char c=a[i];
  		int sz=0;
  		for (int j=i+1; j<strlen(a); j++){
  			if (a[j]==c){
  				cnt[j]=1; break;
  			}
  			tmp[sz++]=a[j];
  			if (a[j]!=c && cnt[j]!=1){
  				if (check(tmp,sz,a[j])) ++res;
  				else --res;
  			}
  		}
  	}
  	printf("%d", res);
	return 0;
}

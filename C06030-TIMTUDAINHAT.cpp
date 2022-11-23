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

struct word{
	char name[50];
	int len, fre;
};

typedef struct word word;

int find (word a[], int n, char c[]){
	for (int i=0; i<n; i++){
		if (strcmp(a[i].name,c)==0) return i;
	}
	return -1;
}

int max (int a, int b){
	if (a > b) return a;
	return b;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	word a[1000]; char tmp[50];
	int n=0;
	while (scanf("%s", tmp)!=-1){
		int x=find(a,n,tmp);
		if (x==-1){
			strcpy(a[n].name,tmp);
			a[n].fre=1;
			a[n].len=strlen(tmp);
			n++;
		}else a[x].fre++;
	}
	int res=0;
	for (int i=0; i<n; i++) res=max(res,a[i].len);
	for (int i=0; i<n; i++){
		int ok=1;
		for (int j=0; j<i; j++){
			if (strcmp(a[j].name,a[i].name)==0){
				ok=0;
				break;
			}
		}
		if (ok && a[i].len==res) printf("%s %d %d\n", a[i].name, a[i].len, a[i].fre);
	}
	return 0;
}
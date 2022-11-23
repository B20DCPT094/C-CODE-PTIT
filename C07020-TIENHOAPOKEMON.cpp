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

struct p{
	char name[100];
	int da, soluong, count;
};

typedef struct p Pokemon;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int n; scanf("%d", &n);
	Pokemon s[n];
	int sum=0, max=0;
	for (int i=0; i<n; i++){
		scanf("%s", s[i].name);
		scanf("%d %d", &s[i].da, &s[i].soluong);
		while (s[i].da<=s[i].soluong){
			s[i].soluong-=s[i].da;
			s[i].soluong+=2;
			s[i].count++;
		}
		sum+=s[i].count;
	}
	printf("%d\n", sum);
	for (int i=0; i<n; i++){
		if (s[i].count>max) max=s[i].count;
	}
	for (int i=0; i<n; i++){
		if (s[i].count==max){
			printf("%s", s[i].count);
			break;
		}
	}
	return 0;
}
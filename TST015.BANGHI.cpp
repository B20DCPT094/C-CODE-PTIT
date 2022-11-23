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

void swap (int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort (int a[], int b[], int c[], int s[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if (s[j]>s[j+1]){
				swap(&s[j],&s[j+1]);
				swap(&a[j],&a[j+1]);
				swap(&b[j],&b[j+1]);
				swap(&c[j],&c[j+1]);
			}
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
 //  	freopen("input.txt", "r", stdin);
 //  	freopen("output.txt", "w", stdout);
 //  	#endif
	int n; scanf("%d", &n);
	int a[n], b[n], c[n], s[n], p;
	for (int i=0; i<n; i++){
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
		p=(a[i]+b[i]+c[i])/2;
		s[i]=sqrt(p*(p-a[i])*(p-b[i])*(p-c[i]));
	}
	sort(a,b,c,s,n);
	for (int i=0; i<n; i++) printf("%d %d %d\n", a[i], b[i], c[i]);
	return 0;
}
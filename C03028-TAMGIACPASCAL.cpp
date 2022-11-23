#include <stdio.h>
#include <math.h>

typedef long long ll;

ll gcd (ll a, ll b){
	if (b==0) return a;
	return gcd(b,a%b);
}

ll lcm (ll a, ll b){
	return a/gcd(a,b)*b;
}

int a[100][100];

int main(){
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			if (j==0 || j==i){
				a[i][j]=1;
			}else{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

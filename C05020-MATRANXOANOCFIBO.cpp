#include <stdio.h>

#define ll long long

ll f[100];

void init(){
	f[0]=0, f[1]=1;
	for (int i=2; i<=93; i++){
		f[i]=f[i-1]+f[i-2];
	}
}

int main(){
	init();
	int n; scanf("%d", &n);
	ll a[n][n];
	int cnt=0;
	int h1=0, h2=n-1, c1=0, c2=n-1;
	while (h1<=h2 && c1<=c2){
		for (int i=c1; i<=c2; i++){
			a[h1][i]=f[cnt];
			++cnt;
		}
		++h1;
		for (int i=h1; i<=h2; i++){
			a[i][c2]=f[cnt];
			++cnt;
		}
		--c2;
		if (c1<=c2){
			for (int i=c2; i>=c1; i--){
				a[h2][i]=f[cnt];
				++cnt;
			}
			--h2;
		}
		if (h1<=h2){
			for (int i=h2; i>=h1; i--){
				a[i][c1]=f[cnt];
				++cnt;
			}
			++c1;
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) printf("%lld ", a[i][j]);
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

typedef long long ll;
ll a[1000001];
int cnt[1000001];

int main(){
	ll x;
	int n=0;
	while (scanf("%lld", &x)!=-1){
		a[n]=x;
		cnt[a[n]]++;
		++n;
	}
	for (int i=0; i<n; i++){
		printf("%lld %d", a[i], cnt[i]);
	}
	return 0;
}

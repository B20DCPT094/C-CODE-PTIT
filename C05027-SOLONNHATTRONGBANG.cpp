#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef long long ll;
const int MOD = 1e9+7;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int n; scanf("%d", &n);
	int d=1e9, r=1e9;
	while (n--){
		int a,b; scanf("%d %d", &a, &b);
		if (d>a) d=a;
		if (r>b) r=b;
	}
	printf("%lld", 1ll*d*r);
	return 0;
}

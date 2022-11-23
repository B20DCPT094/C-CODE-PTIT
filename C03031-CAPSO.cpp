#include <stdio.h>

int gcd (int a, int b){
	if (b==0) return a;
	return gcd(b,a%b);
}

int solve (int a, int b, int c, int d){
	int res=gcd(a,b);
	int ans=gcd(c,d);
	if (res==ans) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a,b,c,d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if (solve(a,b,c,d)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check (char c[]){
	if (c[0]!='8' || c[strlen(c)-1]!='8') return 0;
	int sum=0;
	for (int i=0; i<strlen(c); i++) sum+=(c[i]-'0');
	if (sum%10!=0) return 0;
	int l=0, r=strlen(c)-1;
	while (l<r){
		if (c[l]!=c[r]) return 0;
		++l;--r;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		char c[1000];
		scanf("%s", c);
		if (check(c)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

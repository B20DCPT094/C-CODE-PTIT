#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int check (char c[]){
	for (int i=0; i<strlen(c); i++){
		int r=c[i]-'0';
		if (r!=2 && r!=3 && r!=5 && r!=7) return 0;
	}
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

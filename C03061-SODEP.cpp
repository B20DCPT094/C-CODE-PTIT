#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check (char c[]){
	if ((c[0]-'0')/(c[strlen(c)-1]-'0')!=2 && (c[strlen(c)-1]-'0')/(c[0]-'0')!=2) return 0;
	int l=1, r=strlen(c)-2;
	while (l<r){
		if (c[l]!=c[r]) return 0;
		++l;--r;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while (t--){
		char c[20];
		scanf("%s", c);
		if (check(c)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

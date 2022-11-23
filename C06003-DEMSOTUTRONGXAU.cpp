#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t; scanf("%d", &t);
	scanf("\n");
	while (t--){
		char c[1000];
		gets(c);
		int cnt=0;
		char *token=strtok(c," ");
		while (token!=NULL){
			++cnt;
			token=strtok(NULL," ");
		}
		printf("%d\n", cnt);
	}
	return 0;
}

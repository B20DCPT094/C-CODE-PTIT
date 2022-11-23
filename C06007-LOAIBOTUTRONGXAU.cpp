#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[105];
	gets(c);
	char w[105];
	scanf("%s", w);
	char a[20][50];
	int n=0;
	char *token = strtok(c," ");
	while (token!=NULL){
		if (strcmp(token,w)!=0){
			strcpy(a[n],token);
			++n;
		}
		token=strtok(NULL," ");
	}
	for (int i=0; i<n; i++){
		printf("%s", a[i]);
		if (i!=n-1) printf(" ");
	}
	return 0;
}

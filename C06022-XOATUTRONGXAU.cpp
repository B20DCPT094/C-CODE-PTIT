#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check (char a[], char b[]){
	int n1=strlen(a), n2=strlen(b);
	if (n1!=n2) return 0;
	for (int i=0; i<n1; i++){
		if (tolower(a[i])!=tolower(b[i])) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	getchar();
	for (int i=1; i<=t; i++){
		char c[200], s[20];
		gets(c);
		scanf("%s", s);
		getchar();
		printf("Test %d: ", i);
		char *token = strtok(c," ");
		while (token!=NULL){
			if (!check(token,s)) printf("%s ", token);
			token=strtok(NULL," ");
		}
		printf("\n");
	}
	return 0;
}

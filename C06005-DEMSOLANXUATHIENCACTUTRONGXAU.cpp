#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	for (int i=0; i<strlen(c); i++) c[i]=tolower(c[i]);
	char a[1000][1000];
	int n=0;
	char *token=strtok(c," ");
	while (token!=NULL){
		strcpy(a[n],token);
		++n;
		token=strtok(NULL," ");
	}
	int cnt[1000];
	for (int i=0; i<n; i++){
		if (cnt[i]==0){
			int res=1;
			for (int j=i+1; j<n; j++){
				if (strcmp(a[i],a[j])==0){
					++res;
					cnt[j]=1;
				}
			}
			printf("%s %d\n", a[i], res);
		}
	}
	return 0;
}

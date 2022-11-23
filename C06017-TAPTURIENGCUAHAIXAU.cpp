#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cmp (const void *a, const void *b){
	char* x = (char*)a;
	char* y = (char*)b;
	return strcmp(x,y);
}

int main(){
	char c1[200], c2[200], a[20][20], b[20][20];
	gets(c1);
	gets(c2);
	int n=0, m=0;
	char *token=strtok(c1," ");
	while (token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	token=strtok(c2," ");
	while (token!=NULL){
		strcpy(b[m++],token);
		token=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for (int i=0; i<n; i++){
		while (strcmp(a[i],a[i+1])==0) ++i;
		int ok=0;
		for (int j=0; j<m; j++){
			if (strcmp(a[i],b[j])==0){
				ok=1;
				break;
			}
		}
		if (!ok) printf("%s ", a[i]);
	}
	return 0;
}

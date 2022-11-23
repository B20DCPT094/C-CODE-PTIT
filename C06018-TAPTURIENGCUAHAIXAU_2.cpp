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
	int t; scanf("%d", &t);
	getchar();
	while (t--){
		char c1[500], c2[500], a[50][50], b[50][50];
		int n=0, m=0;
		gets(c1);
		gets(c2);
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
		printf("\n");
	}
	return 0;
}

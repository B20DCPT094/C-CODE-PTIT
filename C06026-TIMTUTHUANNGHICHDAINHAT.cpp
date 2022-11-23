#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct word{
	char val[101];
	int fre;
};

typedef struct word word;

int check (char c[]){
	int l=0, r=strlen(c)-1;
	while (l<r){
		if (c[l]!=c[r]) return 0;
		++l;--r;
	}
	return 1;
}

int find(word a[], int n, char tmp[]){
	for (int i=0; i<n; i++){
		if (strcmp(tmp,a[i].val)==0) return i;
	}
	return -1;
}

int main(){
	word a[1001];
	int n=0;
	char tmp[101];
	while (scanf("%s",tmp)!=-1){
		if (check(tmp)){
			int idx=find(a,n,tmp);
			if (idx==-1){
				strcpy(a[n].val,tmp);
				a[n].fre=1;
				++n;
			}else a[idx].fre+=1;
		}
	}
	int max_len=0;
	for (int i=0; i<n; i++){
		if (max_len<strlen(a[i].val)) max_len=strlen(a[i].val);
	}
	for (int i=0; i<n; i++){
		if (strlen(a[i].val)==max_len) printf("%s %d\n", a[i].val, a[i].fre);
	}
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void rev (int a[], int n){
	int l=0, r=n-1;
	while (l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		++l;--r;
	}
}

void sub (char a[], char b[]){
	int n1=strlen(a), n2=strlen(b);
	int x[n1], y[n1], z[n1];
	for (int i=0; i<n1; i++) x[i]=a[i]-'0';
	for (int i=0; i<n2; i++) y[i]=b[i]-'0';
	rev(x,n1); rev(y,n2);
	for (int i=n2; i<n1; i++) y[i]=0;
	int nho=0, n=0;
	for (int i=0; i<n1; i++){
		int tmp=x[i]-y[i]-nho;
		if (tmp<0){
			nho=1;
			z[n++]=10+tmp;
		}else{
			z[n++]=tmp;
			nho=0;
		}
	}
	int ok=0;
	for (int i=n-1; i>=0; i--){
		if (ok==0 && z[i]) ok=1;
		if (ok) printf("%d", z[i]);
	}
	if (ok==0) printf("0");
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	int t; scanf("%d", &t);
	while (t--){
		char a[1001], b[1001];
		scanf("%s %s", a, b);
		if (strlen(a)>strlen(b) || strlen(a)==strlen(b) && strcmp(a,b)>0) sub(a,b);
		else sub(b,a);
		printf("\n");
	}
	return 0;
}

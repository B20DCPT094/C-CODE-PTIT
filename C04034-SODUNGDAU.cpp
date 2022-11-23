#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		memset(b,0,sizeof(b));
		for (int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		int j=0;
		int k=a[n-1];
		for (int i=n-1; i>=1; i--){
			if (a[i]<a[i-1]){
				b[j++]=a[i-1];
			}else{
				swap(&a[i],&a[i-1]);
			}
		}
		for (int i=j-1; i>=0; i--) printf("%d ", b[i]);
		printf("%d", k);
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

void sort1 (int a[], int n){
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}

void sort2 (int a[], int n){
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]<a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	int cnt=0;
	while (t--){
		++cnt;
		int n; scanf("%d", &n);
		int a[n],b[n];
		for (int i=0; i<n; i++) scanf("%d", &a[i]);
		for (int i=0; i<n; i++) scanf("%d", &b[i]);
		sort1(a,n);
		sort2(b,n);
		printf("Test %d:\n", cnt);
		for (int i=0; i<n; i++){
			printf("%d %d ", a[i], b[i]);
		}
		printf("\n");
	}
	return 0;
}

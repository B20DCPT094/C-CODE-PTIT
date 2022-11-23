#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	double ans=0;
	for (int i=0; i<n; i++){
		ans+=a[i];
	}
	printf("%.3f", 1.0*ans/n);
	return 0;
}

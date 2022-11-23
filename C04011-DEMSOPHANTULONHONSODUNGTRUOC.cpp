#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int n,dem=1;;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int max=a[0];
		for(int i=1;i<n;i++){
			if(max<a[i]){
				max=a[i];
				dem++;
			}
		}
		printf("%d\n",dem);
	}
	return 0;
}

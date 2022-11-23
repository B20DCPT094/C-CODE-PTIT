#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int res=0;
	for (int i=1; i<n; i++){
		if (n%i==0){
			res+=i;
		}
	}
	if (res==n) printf("1");
	else printf("0");
	return 0;
}

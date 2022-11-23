#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int m=n;
	int ans=0;
	while (n){
		int res=1;
		int d=n%10;
		for (int i=1; i<=d; i++){
			res*=i;
		}
		ans+=res;
		n/=10;
	}
	if (ans==m) printf("1");
	else printf("0");
	return 0;
}

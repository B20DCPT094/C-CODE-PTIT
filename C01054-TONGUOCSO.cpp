#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	long long sum=0;
	while(t--){
		int n;
		scanf("%d", &n);
		for (int i=2; i<=sqrt(n); i++){
			while(n%i==0){
				sum+=i;
				n/=i;
			}
		}
		if(n!=1) sum+=n;
	}
	printf("%lld", sum);
	return 0;
}

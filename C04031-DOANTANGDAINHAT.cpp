#include<stdio.h>
#include<math.h>
int kt(long long a[],long long batdau, long long thutu){
	for(long long i=batdau;i<batdau+thutu-1;i++){
		if(a[i]>=a[i+1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		long long n;
	scanf("%lld",&n);
	long long a[100005]={0};
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	long long d=1,m=0;
	a[n]=a[n-2];
	for(long long i=1;i<=n;i++){
		if(a[i-1]<a[i]) d++;
		else{
			if(d>=m){
				m=d;
			}
			d=1;
		}
	}
	printf("Test %d:\n",q);
	printf("%lld\n",m);
	for(long long i=0;i<n;i++){
		if(kt(a,i,m)==1){
			for(long long j=i;j<=i+m-1;j++){
				printf("%lld ",a[j]);
			}
			printf("\n");
		}
	}	
	}
	
	return 0;
}

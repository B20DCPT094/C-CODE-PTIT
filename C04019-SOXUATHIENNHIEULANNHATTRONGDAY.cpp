#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		long long n;
		scanf("%lld",&n);
		long long a[n];
		long long d[30005]={0};
		for(long long i=0;i<n;i++){
			scanf("%lld",&a[i]);
			d[a[i]]++;	
			if(d[a[i]]>1) a[i]=-1;
		}
		long long max=d[a[0]];
		for(long long i=1;i<n;i++){
			
			if(a[i]!=-1&&max<d[a[i]]) max=d[a[i]];
		}
		for(long long i=0;i<n;i++){
			if(a[i]!=-1&&d[a[i]]==max) printf("%lld ",a[i]);
		}
		printf("\n");
	}
		return 0;
}


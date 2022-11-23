#include<stdio.h>
#include<math.h>
int main(){
	long long n,dem=0;
	scanf("%lld",&n);
	long long a[100005];
	long long dd[100005]={0};
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
		dd[a[i]]++;	
		if(dd[a[i]]>1) a[i]=-1;
	}
	for(long long i=0;i<n;i++){
		if(dd[a[i]]>=2){
			if(a[i]!=-1){
			dem++;
			}
		}
	}
	printf("%lld\n",dem);
	for(long long i=0;i<n;i++){
		if(dd[a[i]]>=2){
			if(a[i]!=-1){
				printf("%lld ",a[i]);
			}
		}
	}

		return 0;
}

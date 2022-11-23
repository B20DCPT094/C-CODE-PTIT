#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		long long n;
		scanf("%lld",&n);
		long long a[100005];
		long long dd[100005]={0};
		for(long long i=0;i<n;i++){
			scanf("%lld",&a[i]);
			dd[a[i]]++;	
			if(dd[a[i]]>1) a[i]=-1;
		}
		printf("Test %d:\n",q);
		for(long long i=0;i<n;i++){
			if(a[i]!=-1) printf("%lld xuat hien %lld lan\n",a[i],dd[a[i]]);
		}
	}
		return 0;
}


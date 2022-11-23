#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int u[n],d[n];
	long long len=0,xuong=0;
	int minu=50005,mind=50005;
	for(int i=0;i<n;i++){
		scanf("%d%d",&u[i],&d[i]);
		len+=u[i];
		xuong+=d[i];
		if(u[i]<minu) minu=u[i];
		if(d[i]<mind) mind=d[i];
	}
	len+=mind;
	xuong+=minu;
	if(len>xuong) printf("%lld",len);
	else printf("%lld",xuong);
	return 0;
	
}

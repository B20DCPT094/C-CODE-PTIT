#include<stdio.h>
#include<math.h>
int tongchuso(int n){
	int s=0;
	while(n>0){
		s=s+(n%10);
		n/=10;
	}
	return s;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(tongchuso(a)<=tongchuso(b)) printf("%d %d",a,b);
	else printf("%d %d",b,a);
	return 0;
}

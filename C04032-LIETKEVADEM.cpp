#include <stdio.h>
int main(){
	int t,a[100002],pos1=0,c[100002],pos3=0,pos[100002],maxx=0,max2=100000;
	for(int i=0;i<100002;i++) pos[i]=1;
	while(scanf("%d",&t)!=-1){
		a[pos1]=t;
		pos1++;
	}
	for(int i=0;i<pos1;i++){
		int k=a[i],b[10],pos2=0,ok=1;
		while(k!=0){
			b[pos2]=k%10;
			pos2++;
			k/=10;
		}
		for(int j=1;j<pos2;j++){
			if(b[j]>b[j-1]) ok=0;
		}
		if(ok==1){
			c[pos3]=a[i];
			pos3++;
		}
	}
	int k=pos3;
	for(int i=0;i<pos3-1;i++){
		for(int j=i+1;j<pos3;j++){
			if(c[i]==c[j]){
				pos[i]++;
				c[j]=0;
			}
		}
	}
	for(int i=0;i<pos3;i++){
		maxx=0;
		for(int j=0;j<pos3;j++){
			if(pos[j]>maxx&&c[j]!=0&&pos[j]<max2){
				maxx=pos[j];
			}
		}
		for(int j=0;j<pos3;j++){
			if(pos[j]==maxx&&c[j]!=0){
				printf("%d %d\n",c[j],pos[j]);
			}
		}
		max2=maxx;
	}
}


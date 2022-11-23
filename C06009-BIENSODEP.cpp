#include<stdio.h>
#include<string.h>
/* int kt(int a[] ){
	if(a[0]<a[1]&&a[1]<a[2]&&a[2]<a[3]&&a[3]<a[4]) return 1;
	else if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]) return 1;
	else if(a[0]==a[1]&&a[1]==a[2]&&a[2]!=a[3]&&a[3]==a[4]) return 1;
	else if(((a[0]==6)||(a[0]==8))&&((a[1]==6)||(a[1]==8))&&((a[2]==6)||(a[2]==8))&&((a[3]==6)||(a[3]==8))&&((a[4]==6)||(a[4]==8))) return 1;
	else return 0;
} */
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[15];
		fgets(a,sizeof(a),stdin);
		int b[5];
		b[0]= (int) a[6]-48;b[1]=(int)a[7]-48;b[2]=(int)a[8]-48;b[3]=(int)a[10]-48;b[4]=(int)a[11]-48;
	if(b[0]<b[1]&&b[1]<b[2]&&b[2]<b[3]&&b[3]<b[4]) printf("YES\n");
	else if(b[0]==b[1]&&b[1]==b[2]&&b[2]==b[3]&&b[3]==b[4]) printf("YES\n");
	else if(b[0]==b[1]&&b[1]==b[2]&&b[2]!=b[3]&&b[3]==b[4]) printf("YES\n");
	else if(((b[0]==6)||(b[0]==8))&&((b[1]==6)||(b[1]==8))&&((b[2]==6)||(b[2]==8))&&((b[3]==6)||(b[3]==8))&&((b[4]==6)||(b[4]==8))) printf("YES\n");
	else printf("NO\n");
		
	/*	for(int i=0;i<5;i++){
			printf("%d ",b[i]);
		} */
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int b[10]={0};
int main(){
	char a[100];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='7') b[a[i]-'0']++;
		if(b[a[i]-'0']>1) a[i]='9';
	}
	for(int i=0;i<strlen(a);i++){
		if(b[a[i]-'0']!=0) printf("%d %d\n",a[i]-'0',b[a[i]-'0']);
	}
	return 0;
}

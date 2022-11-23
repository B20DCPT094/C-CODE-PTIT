#include<stdio.h>
#include<string.h>
int kt(char a[]){
	for(int i=0;i<strlen(a);i++){
		if((a[i])=='1') return 1;
		}
		return 0;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[20];
		scanf("%s",a);
		int check=kt(a);
			for(int i=0;i<strlen(a);i++){
				if((a[i])=='0') a[i]='0';
				else if((a[i])=='1') a[i]='1';
				else if((a[i])=='8') a[i]='0';
				else if((a[i])=='9') a[i]='0';
				else {
					check = 0;
					break;
				}
			}
		if(!check) printf("INVALID");
		else {
			int k=0;
			while(a[k]=='0'){
				k++;
			}
			for(int i=k;i<strlen(a);i++){
				printf("%c",a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

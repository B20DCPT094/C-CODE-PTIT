#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		int dem=0,chan=0,le=0;
	char s[200005];
	char a[205][205];
	int b[205]={0};
	fgets(s,sizeof(s),stdin);
	char x[2]=" ";
	int len=0;
	char *token;
	token = strtok(s, x);
	while(token != NULL ){
		strcpy(a[len],token);
		len++;
		token = strtok(NULL, x);
	}
	for(int i=0;i<len;i++){
		for(int j=0;j<strlen(a[i]);j++){
			b[i]+=(a[i][j]-48)*pow(10,strlen(a[i])-1-j);
		}
	}
	for(int i=0;i<205;i++){
		if(b[i]!=0){
			dem++;
			if(b[i]%2==0) chan++;
			else le++;
		}
	}
		if(dem%2==0&&chan>le) printf("YES\n");
		if(dem%2!=0&&chan<le) printf("YES\n");
		if(chan==le) printf("NO\n");
		if(dem%2==0&&chan<le) printf("NO\n");
		if(dem%2!=0&&chan>le) printf("YES\n");
	}
	return 0;
}
